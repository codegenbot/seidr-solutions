#include <iostream>
#include <string>
#include <vector>

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices;
    size_t pos = 0;
    pos = text.find(target, pos);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    using namespace std;
    
    for (size_t i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}