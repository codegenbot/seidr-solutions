```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>
#include <memory>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

bool issame(std::initializer_list<std::string> a, std::initializer_list<std::string> b) {
    std::vector<std::string> v1(a), v2(b);
    return (v1 == v2);
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main_entry() {
    assert(issame(std::vector<std::string>(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})), std::vector<std::string>({"cc","dd","aaaa","bbbb"})));
    
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    std::vector<std::string> inputStrings;
    inputStrings.reserve(n);  
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, str);
        inputStrings.push_back(str);
    }
    
    std::vector<std::string> output = sorted_list_sum(inputStrings);
    
    for(int i = 0; i < output.size(); i++) {
        bool found = false;
        for(int j = 0; j < output.size(); j++) {
            if(i != j && output[i] == output[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            std::cout << output[i] << std::endl;
        }
    }
    
    return 0;
}