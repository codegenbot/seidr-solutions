```c++
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<std::string> vec1, vec2;
    
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        vec1.push_back(str);
    }
    
    std::cout << "Enter number of vectors: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        vec2.push_back(str);
    }
    
    if (issame(vec1, vec2))
        std::cout << "Vectors are same\n";
    else
        std::cout << "Vectors are not same\n";
    
    return 0;
}