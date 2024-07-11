#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices;
    int pos = 0;
    while (pos < text.size() - target.size() + 1) {
        pos = text.find(target, pos);
        if (pos != string::npos) {
            indices.push_back(pos);
            pos++;
        }
    }

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}