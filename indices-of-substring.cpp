#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; i <= n-m+1; ) { 
        if(text.substr(i, m) == target) {
            if (i < m) {
                result.push_back(0);
            }
            result.push_back(i); 
        }
        i = i + 1;
        while(i <= n-m && text.substr(i-1, 1) == text.substr(i, 1)) {
            i++;
        }
    }

    return result;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}