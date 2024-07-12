```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    for (int i = 0; i < lst.size(); ) {
        if (lst[i] == *std::max_element(lst.begin(), lst.end())) {
            result.push_back(lst[i]);
            lst.erase(lst.begin() + i);
        } else if (lst[i] == *std::min_element(lst.begin(), lst.end())) {
            result.push_back(lst[i]);
            lst.erase(lst.begin() + i);
        } else {
            i++;
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {111111};
    assert(std::equal(strange_sort_list(input).begin(), strange_sort_list(input).end(), input.begin()));
    return 0;
}