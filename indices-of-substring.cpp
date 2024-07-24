#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < static_cast<int>(indices.size()); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}