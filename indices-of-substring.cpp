#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    int pos = text.rfind(target, text.size());
    while (pos != string::npos) {
        indices.insert(indices.begin(), pos);
        pos = text.rfind(target, pos - 1);
    }

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}