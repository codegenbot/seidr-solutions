#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    
    if (target.empty()) {
        cout << "Invalid input: Target string is empty.";
        return 0;
    }
    
    vector<size_t> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + (target.size() == 1 ? 1 : 0)); // Account for overlapping targets
    }
    
    for (size_t i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}