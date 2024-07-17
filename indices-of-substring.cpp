#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0; 
    while (i <= n - m) { 
        if(text.substr(i, m) == target) {
            result.push_back(i); 
            i += m; 
        } else {
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