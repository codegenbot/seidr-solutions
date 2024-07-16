#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool kmp_next(string pattern, int j) {
    while(j > 0 && pattern[j - 1] != pattern[0])
        j = kmp_next(pattern, j - 1);

    return j;
}

bool kmp(string text, string pattern) {
    int i = 0;
    int j = 0;

    while(i < text.length() && j < pattern.length()) {
        if(text[i] == pattern[j]) {
            i++;
            j++;
        } else if(j != 0) {
            j = kmp_next(pattern, j);
        } else {
            i++;
        }
    }

    return j == pattern.length();
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0;
    while(i <= n - m){
        if(kmp(text.substr(i, m), target))
            result.push_back(i); 
        i++;
    }

    return result;
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