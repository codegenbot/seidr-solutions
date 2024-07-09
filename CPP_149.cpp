#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    for (auto& sublst : lst) {
        auto it = std::remove_if(sublst.begin(), sublst.end(), [](const std::string& s){ return s.length() % 2; });
        sublst.erase(it, sublst.end());
        std::sort(sublst.begin(), sublst.end(), 
            [](const std::string& a, const std::string& b){
                if(a.length() != b.length()) {
                    return a.length() < b.length();
                } else {
                    return a < b;
                }
            });
    }
    return lst;
}

int main() {
    std::vector<std::vector<std::string>> lst = {{"apple", "banana"}, {"hello", "world"}};
    std::cout << "[ ";
    for (const auto& s : sorted_list_sum(lst)) {
        std::cout << "\"" << *s.begin() << "\" ";
    }
    std::cout << "]\n";
}