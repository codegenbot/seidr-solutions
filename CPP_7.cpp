#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        throw std::runtime_error("Vectors are not the same size");
    }

    for (int i = 0; i < a.size(); i++) {
        if (!issame(a[i], b[i])) {
            throw std::runtime_error("Strings in vectors are not the same");
        }
    }

    return true;
}

int main() {
    try {
        assert(issame({filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").begin(), (filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")).end()}, {{"grunt"}, {"prune"}}));
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
    
    return 0;
}