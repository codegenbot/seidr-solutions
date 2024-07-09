#include <vector>
#include <string>

// Function declarations
bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> all_prefixes(std::string str);

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    bool result = issame(all_prefixes(str), all_prefixes(str));
    if(result)
        std::cout << "The strings have the same prefixes.\n";
    else
        std::cout << "The strings do not have the same prefixes.\n";
}

// Function definitions
bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for(int i = 1; i <= str.length(); i++){
        result.push_back(str.substr(0, i));
    }
    return result;
}