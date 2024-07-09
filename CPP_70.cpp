```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> list1{4, 2, 9, 6, 5, 1, 3, 7, 8};
    std::vector<int> list2{1, 2, 3, 4, 5, 6, 7, 8, 9};

    if (issame(list1, list2)) {
        std::cout << "Lists are same.\n";
    } else {
        std::cout << "Lists are different.\n";
    }

    vector<int> result = strange_sort_list(list1);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}