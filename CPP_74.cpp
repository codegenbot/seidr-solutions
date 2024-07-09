```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b, std::vector<std::string> c) {
    if (a.size() != b.size() || a.size() != c.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i], c[i])) return false;
    }
    return true;
}

int total_sum(std::vector<std::string> lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : std::string(s)) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = total_sum(lst1);
    int sum2 = total_sum(lst2);
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::vector<std::string> lst1 {"this", "is", "a"};
    std::vector<std::string> lst2 {"hello", "from", "c++"};

    assert(issame({{"this"}}, {""}, {}));
    std::cout << "Test passed" << std::endl;
    
    if (total_sum(lst1) < total_sum(lst2)) {
        std::cout << "List 1 has the highest sum." << std::endl;
    } else if (total_sum(lst1) > total_sum(lst2)) {
        std::cout << "List 2 has the highest sum." << std::endl;
    } else {
        std::cout << "Both lists have the same sum." << std::endl;
    }
    
    return 0;
}