#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text, target;
    std::cin >> text >> target;

    std::vector<int> indices;
    
    if (target.empty()) {
        for (int i = 0; i < text.length(); ++i) {
            indices.push_back(i);
        }
    } else {
        size_t pos = 0;

        while (true) {
            pos = text.find(target, pos);
            if (pos != std::string::npos) {
                indices.push_back(pos);
                pos += target.length();
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        std::cout << indices[i] << " ";
    }

    return 0;
}