#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> indices;

    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i).find(target) == 0) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}