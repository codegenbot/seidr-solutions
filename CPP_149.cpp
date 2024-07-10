```cpp
#include <vector>
#include <string>

bool same(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[b.size()-1-i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> input) {
    std::sort(input.begin(), input.end());
    return input;
}

int driver() {
    std::vector<std::string> input = std::vector<std::string>({"aaaa", "bbbb", "dd", "cc"});
    assert(same(sorted_list_sum(input), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}