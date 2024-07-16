#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int pos = 0;

    while (pos < n && (pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos); 
        pos += m; // increment pos by the length of target
    }

    return result;
}

int main() {
    string text, target;
    vector<int> results;

    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);

    results = indicesOfSubstring(text, target);
    for (int i : results) {
        cout << i << " ";
    }
    return 0;
}