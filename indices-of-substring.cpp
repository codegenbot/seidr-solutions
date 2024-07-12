#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = -1;
    do {
        pos = text.find(target, pos + 1);
        if (pos != string::npos) {
            indices.push_back(pos);
        }
    } while (pos != string::npos);
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}