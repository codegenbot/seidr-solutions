#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(), 
        [](const std::string& a, const std::string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    return lst;
}

int main() {
    std::vector<std::string> lst = {{"apple", "banana"}, {"hello", "world"}};
    std::cout << "[ ";
    for (const auto& s : sorted_list_sum(lst)) {
        std::cout << "\"" << s << "\" ";
    }
    std::cout << "]\n";
}