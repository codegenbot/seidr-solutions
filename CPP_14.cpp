#include <iostream>
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
    // Test the functions
    std::vector<std::string> prefixes1 = all_prefixes("hello");
    std::vector<std::string> prefixes2 = all_prefixes("world");

    assert(!issame(prefixes1, prefixes2));

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}