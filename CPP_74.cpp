#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::vector<char*>> a, std::vector<std::vector<char*>> b, std::vector<std::vector<char*>> c) {
    if (a.size() != b.size() || a.size() != c.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!issame(a[i], b[i], c[i])) return false;
    }
    return true;
}

int total_sum(std::vector<char*> lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : std::string(s)) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<char*> total_match(std::vector<char*> lst1, std::vector<char*> lst2) {
    if (lst1.empty() || lst2.empty()) return {};
    int sum1 = total_sum(lst1);
    int sum2 = total_sum(lst2);
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return lst1;
}

int main() {
    std::vector<std::vector<char*>> lst1 = {{"this", "is", "a"}};
    std::vector<std::vector<char*>> lst2 = {{"hello", "from", "c++"}};

    if (!issame({lst1}, {lst1}, {total_match(lst1[0], lst2[0])})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}