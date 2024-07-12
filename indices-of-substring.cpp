#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string text, target;
    
    getline(cin, text);
    getline(cin, target);

    text.erase(text.find_last_not_of(" \n\r\t") + 1);
    target.erase(target.find_last_not_of(" \n\r\t") + 1);

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }

    return 0;
}