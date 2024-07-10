#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    std::string text, target;
    cin >> target >> text;
    
    std::vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }
    
    return 0;
}