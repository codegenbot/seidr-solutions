#include <iostream>
#include <string>
#include <vector>

int main() {
    using namespace std;
    
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }

    for (int index : indices) {
        cout << index << " ";
    }

    return 0;
}