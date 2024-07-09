#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return 0;
}