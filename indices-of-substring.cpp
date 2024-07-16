#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int start = 0; // Starting index of the current substring

    while (start < n) {
        int pos = text.find(target, start);
        
        if (pos != -1) {
            result.push_back(pos); 
            start = pos + m; // Move the start pointer to the end of the found substring
        } else {
            break;
        }
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