#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool issame(std::vector<std::string> a, std::vector<std::string> vec2) {
    if (a.size() != vec2.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const auto& s : lst1) {
        sum1 += s.length();
    }
    for (const auto& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::vector<std::string> lst1 = {"Hello", "World"};
    std::vector<std::string> lst2 = {"Python", "Programming"};
    
    bool result = issame(lst1, lst2);
    if (result) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are not the same." << std::endl;
    }
    
    std::vector<std::string> result_vector = total_match(lst1, lst2);
    for (const auto& s : result_vector) {
        std::cout << s << std::endl;
    }
    
    return 0;
}