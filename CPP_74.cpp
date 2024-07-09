```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& s1, const std::vector<std::string>& s2) {
    return s1.size() == 3 && s2.size() == 3 && s1[0] == s2[0] && s1[1] == s2[1] && s1[2] == s2[2];
}

int total_sum(const std::vector<std::string>& lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : std::string(s)) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = total_sum(lst1);
    int sum2 = total_sum(lst2);
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::vector<std::string> lst1 = {"apple", "banana", "cherry"};
    std::vector<std::string> lst2 = {"date", "elderberry", "fig"};
    std::vector<std::string> lst3 = {"grape", "honeydew", "ice cream"};
    std::vector<std::string> lst4 = {"jackfruit", "kiwi", "lemon"};

    assert(issame({"this"}, {"this", "", ""}));
    std::cout << "Test passed" << std::endl;
    
    if (total_sum(lst1) < total_sum(lst2)) {
        std::cout << "List 1 has the highest sum." << std::endl;
    } else if (total_sum(lst1) > total_sum(lst2)) {
        std::cout << "List 2 has the highest sum." << std::endl;
    } else {
        std::cout << "Both lists have the same sum." << std::endl;
    }
    
    std::vector<std::string> result = total_match(lst3, lst4);
    if (total_sum(result) < total_sum(lst3)) {
        std::cout << "List 3 has the highest sum." << std::endl;
    } else if (total_sum(result) > total_sum(lst3)) {
        std::cout << "List 4 has the highest sum." << std::endl;
    } else {
        std::cout << "Both lists have the same sum." << std::endl;
    }
    
    return 0;
}