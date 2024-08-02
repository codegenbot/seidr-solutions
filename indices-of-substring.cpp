#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    // Read the target string without the curly braces
    getline(cin >> ws, target);
    vector<int> indices;
    for (size_t i = 0; i < text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }
    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}