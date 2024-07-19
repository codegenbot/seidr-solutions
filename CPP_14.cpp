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
    std::vector<std::string> vec1 = all_prefixes("hello");
    std::vector<std::string> vec2 = all_prefixes("hell");
    
    if (issame(vec1, vec2)) {
        std::cout << "The prefixes are the same." << std::endl;
    } else {
        std::cout << "The prefixes are different." << std::endl;
    }
    
    return 0;
}