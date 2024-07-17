#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i=0; ; ) { 
        if(i+n-m > n) break; // Check if we have reached the end of the string
        if(text.substr(i, m) == target) {
            result.push_back(i); 
            i += m; // Start searching from last found index + target length
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