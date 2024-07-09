#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b, std::vector<std::string> c) {
    if (a.size() != b.size() || a.size() != c.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i] && a[i] != c[i]) return false;
    }
    return true;
}

int total_sum(std::vector<std::string> lst) {
    int sum = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            sum += static_cast<int>(c);
        }
    }
    return sum;
}

std::vector<int> total_match(int sum1, int sum2) {
    if (sum1 > sum2) return {sum1};
    else if (sum1 < sum2) return {sum2};
    else return {sum1};
}

int main() {
    std::vector<std::string> lst1 = {"this"};
    std::vector<std::string> lst2 = {};
    int sum1 = total_sum(lst1);
    int sum2 = 0;
    if (!issame({lst1}, {lst1}, total_match(sum1, sum2))) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}