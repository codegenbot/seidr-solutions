#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    if (target.empty()) {
        cout << "0";
        return 0;
    }

    vector<int> indices;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}