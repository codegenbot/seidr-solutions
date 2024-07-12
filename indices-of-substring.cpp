#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<size_t> indices;

    size_t found = 0;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        ++pos;
        found = 1;
    }
    
    cout << indices.size() << endl;
    for (size_t i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}