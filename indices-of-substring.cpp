#include <iostream>
#include <vector>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 1; i <= indices.size(); ++i) {
        cout << indices[i - 1] << " ";
    }
    
    return 0;
}