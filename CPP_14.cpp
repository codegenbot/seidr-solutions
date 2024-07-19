#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> prefixes1 = all_prefixes("hello");
    std::vector<std::string> prefixes2 = all_prefixes("world");
    
    if (issame(prefixes1, prefixes2)) {
        std::cout << "Prefixes are the same." << std::endl;
    } else {
        std::cout << "Prefixes are different." << std::endl;
    }
    
    return 0;
}