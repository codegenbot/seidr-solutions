#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string text, target;
    cin >> target >> text;
    
    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(static_cast<int>(pos));
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}