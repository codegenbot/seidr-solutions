#include <vector>
#include <string>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t found = text.find(target, start);
        if (found != std::string::npos) {
            indices.push_back(found);
            start = found + 1;
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    int result = gcd(10, 15); // For example
    return 0;
}