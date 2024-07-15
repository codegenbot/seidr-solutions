#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    int sum1 = 0, sum2 = 0;
    for (const auto &str : a) {
        sum1 += str.size();
    }
    for (const auto &str : b) {
        sum2 += str.size();
    }

    return sum1 == sum2;
}

int main() {
    assert (issame(std::vector<std::string>{"this"}, {}) == 1);
    return 0;
}