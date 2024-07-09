#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // avoid infinite loop
    }
    
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (auto index : indices) {
        cout << index << endl;
    }

    return 0;
}