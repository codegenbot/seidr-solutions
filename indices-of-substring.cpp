#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices;
    size_t pos = max(text.size() - target.size(), static_cast<size_t>(0));

    while (true) {
        pos = text.rfind(target, pos);
        if (pos == string::npos) {
            break;
        }
        indices.push_back(pos);
        if (pos == 0) {
            break;
        }
        pos--;
    }

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}