```cpp
#include <iostream>
#include <vector>
#include <string>

auto findIndices(string text, string target) -> vector<int> {
    vector<int> indices;
    int prevLast = 0;
    while (last = text.find(target, prevLast)) != string::npos) {
        indices.push_back(last);
        prevLast = last + 1;
    }
    return vector<int>(indices.begin(), indices.end());
}

int main() {
    string text;
    cin >> text;

    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    return 0;
}