#include <vector>
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    while ((index = text.find(target, index)) != string::npos) {
        result.push_back(index);
        index += target.length(); // to avoid overlapping
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    vector<int> indices = indicesOfSubstring(text, text);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}