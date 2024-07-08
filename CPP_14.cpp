#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return true;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    
    std::vector<std::string> prefixes = all_prefixes(input);
    for (const auto& prefix : prefixes) {
        if (issame(prefix)) {
            std::cout << "All characters in the string are the same.\n";
        } else {
            std::cout << "Prefix: " << prefix << "\n";
        }
    }
    
    return 0;
}