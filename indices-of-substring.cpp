#include <iostream>
#include <string>
#include <vector>

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    
    size_t pos = text.find(target, 0, target.size());
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1, target.size());
    }
    
    using namespace std;
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}