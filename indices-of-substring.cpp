#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}