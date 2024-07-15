#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

using namespace std;

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& v) {
    std::vector<std::string> sorted_v = v;
    std::sort(sorted_v.begin(), sorted_v.end());
    return sorted_v;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), std::vector<std::string>{"cc", "dd", "aaaa", "bbbb"}));
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}