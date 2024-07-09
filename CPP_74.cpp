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
        for (char c : s) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = 0;
    for (const auto& s : lst1) {
        sum1 += total_sum({s});
    }
    int sum2 = 0;
    for (const auto& s : lst2) {
        sum2 += total_sum({s});
    }
    if (sum1 < sum2) return {lst1[0], lst2[0]};
    else if (sum1 > sum2) return {lst2[0], lst1[0]};
    else return {lst1[0], lst2[0]};  // or return an empty vector
}

int main() {
    std::vector<std::string> lst1;
    lst1.push_back("apple");
    lst1.push_back("banana");
    lst1.push_back("cherry");

    std::vector<std::string> lst2;
    lst2.push_back("date");
    lst2.push_back("elderberry");
    lst2.push_back("fig");

    std::vector<std::string> lst3;
    lst3.push_back("grape");
    lst3.push_back("honeydew");
    lst3.push_back("ice cream");

    std::vector<std::string> lst4;
    lst4.push_back("jackfruit");
    lst4.push_back("kiwi");
    lst4.push_back("lemon");

    assert(issame({"this"}, {"this", "", ""}));
    std::cout << "Test passed" << std::endl;

    if (total_sum(lst1) < total_sum(lst2)) {
        std::cout << "List 1 has the highest sum." << std::endl;
    } else if (total_sum(lst1) > total_sum(lst2)) {
        std::cout << "List 2 has the highest sum." << std::endl;
    } else {
        std::cout << "Both lists have the same sum." << std::endl;
    }

    std::vector<std::string> result;
    if (!total_match(lst3, lst4).empty()) {
        result = total_match(lst3, lst4);
    }
    if (total_sum({result[0]}) < total_sum({result[1]})) {
        std::cout << "List 3 has the highest sum." << std::endl;
    } else if (total_sum({result[0]}) > total_sum({result[1]})) {
        std::cout << "List 4 has the highest sum." << std::endl;
    } else {
        std::cout << "Both lists have the same sum." << std::endl;
    }

    return 0;
}