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
    cin >> text;

    int n;
    cin >> n;

    string subStr = to_string(n);

    vector<int> indices = indicesOfSubstring(text, subStr);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    while (cin.get() != '\n') {}
}