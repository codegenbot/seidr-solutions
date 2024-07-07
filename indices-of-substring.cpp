#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // increment the start position to find overlapping matches
    }

    return result;
}

int main() {
    string text;
    string target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}