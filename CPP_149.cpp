#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst);

int main() {
    // Add your test cases here to validate the code
    return 0;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst){
    lst.erase(std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2 != 0; }), lst.end());
    
    std::sort(lst.begin(), lst.end(), [](const std::string& a, const std::string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return lst;
}