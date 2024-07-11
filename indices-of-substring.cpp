```cpp
#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            indices.push_back(pos);
            start = pos + 1;
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    int n;
    string text;
    cin >> n;
    cin.ignore();
    getline(cin, text);
    vector<int> result = findIndices(text, text.substr(0, n));
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}