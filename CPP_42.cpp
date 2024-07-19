#include <iostream>
#include <vector>

std::vector<int> incr_list(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        result.push_back(num + 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> tempList2 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    tempList2 = incr_list(tempList2);
    assert(issame(tempList2, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124});
    return 0;
}