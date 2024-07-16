#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        if (text.substr(i, targetLength) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    int n;
    cin >> text >> n;

    if(n != 0) {
        vector<int> indices = indicesOfSubstring(text, to_string(n));
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Error: Target string cannot be empty." << endl;
    }

    return 0;
}