#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum_length1 = 0;
    for (const auto& str : lst1) {
        sum_length1 += str.length();
    }
    
    int sum_length2 = 0;
    for (const auto& str : lst2) {
        sum_length2 += str.length();
    }
    
    if (sum_length1 < sum_length2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}