#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    if (target.empty()) {
        cout << "0\n";
        return 0;
    }

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
        if (pos != string::npos && pos == indices.back()) {
            ++pos;
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    cout << "\n";

    return 0;
}