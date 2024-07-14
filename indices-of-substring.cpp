#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // Start the search from the next character
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = indicesOfSubstring(text, text.substr(0, n));
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;