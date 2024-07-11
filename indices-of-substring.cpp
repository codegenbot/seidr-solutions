
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices;
    size_t pos = text.size();

    while ((pos = text.rfind(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos -= 1;
    }

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}