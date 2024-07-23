#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = text.find(target, 0, target.size());
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1, target.size());
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}