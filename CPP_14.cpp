#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& input) {
    std::vector<std::string> result;
    for (size_t i = 0; i <= input.size(); ++i) {
        result.push_back(input.substr(0, i));
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Invalid input. Please enter a non-empty string." << std::endl;
    } else {
        std::vector<std::string> result = all_prefixes(input);
        if (!issame(result)) {
            std::cout << "The prefixes are not the same." << std::endl;
        } else {
            std::cout << "The prefixes are the same." << std::endl;
        }
    }

    if (!issame(all_prefixes("WWW"))) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}