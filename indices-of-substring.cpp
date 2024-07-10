#include <iostream>
#include <vector>
using namespace std;

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos++;
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}