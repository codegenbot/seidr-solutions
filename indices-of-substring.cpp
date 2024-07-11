#include <iostream>
#include <vector>

using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }

    for (int index : indices) {
        std::cout << index << " ";
    }
    std::cout << std::endl;

    return 0;
}