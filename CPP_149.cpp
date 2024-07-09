#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

std::vector<std::string> sorted_list_sum(std::vector<std::string> list) {
    std::sort(list.begin(), list.end());
    return list;
}

int main() {
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == std::vector<std::string>{"aaaa", "bbbb", "cc", "dd"});
    return 0;
}