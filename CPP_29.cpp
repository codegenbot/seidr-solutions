#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);
std::vector<std::string> filter_by_prefix(std::vector<std::string>, std::string);

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> words(n);

    for (auto &word : words) {
        std::cin >> word;
    }

    std::string prefix;
    std::cin >> prefix;

    bool same = issame(words, filter_by_prefix(words, prefix));

    if(same)
        std::cout << "Same" << std::endl;
    else
        std::cout << "Not Same" << std::endl;

    return 0;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}