#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    cin >> target >> text;
    
    vector<int> indices;
    size_t pos = 0;
    while (pos != text.length()) {
        pos = text.find(target, pos);
        if (pos != string::npos) {
            indices.push_back(pos);
            pos += 1;
        }
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}