#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> next(m);
    next[0] = 0;

    for(int j = 1; j < m; j++) {
        while(j > 0 && target[j - 1] != target[0])
            j = next[j - 1];

        if(j != 0)
            next[j] = j;
        else
            next[j] = 0;

        while(j + 1 < m && target[j - next[j]] == target[j + 1]) {
            j++;
            next[j] = next[j - 1] + 1;
        }
    }

    int i = 0;
    while(i <= n - m){
        if(kmp(text.substr(i, m), target, next))
            result.push_back(i); 
        i++;
    }

    return result;
}

bool kmp(string text, string pattern, vector<int> next) {
    int i = 0;
    int j = 0;

    while(i < text.length() && j < pattern.length()) {
        if(text[i] == pattern[j]) {
            i++;
            j++;
        } else if(j != 0) {
            j = next[j - 1];
        } else {
            i++;
        }
    }

    return j == pattern.length();
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);

    vector<int> results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}