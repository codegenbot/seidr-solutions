```cpp
#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int length = target.length();
    for(int i=0; i<=text.length()-length; i++) {
        if(text.substr(i, length) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Your code here
}