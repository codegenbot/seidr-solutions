#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<size_t> indices;

    bool found = false;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
        found = true;
    }
    
    cout << indices.size() << endl;
    for (size_t i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}