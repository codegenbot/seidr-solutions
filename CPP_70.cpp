```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int smallest = *min_element(lst.begin(), lst.end());
        for (int i = 0; i < lst.size(); i++) {
            if (*lst.begin() == smallest) {
                result.push_back(smallest);
                lst.erase(lst.begin());
                break;
            }
            else {
                lst.erase(lst.begin());
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> result = strange_sort_list({11111});
    if (issame(result, {1, 1, 1, 1, 1})) {
        std::cout << "Output is correct.\n";
    } else {
        std::cout << "Output is incorrect.\n";
    }
    return 0;
}