#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> result;
    int position = 0;
    while ((position = text.find(target, position)) != std::string::npos) {
        result.push_back(position);
        position += 1;
    }

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}