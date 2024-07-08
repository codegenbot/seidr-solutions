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

std::vector<int> strange_sort_list(std::initializer_list<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());

    for (int i : lst)
        result.push_back(i);

    return result;
}

int main() {
    std::vector<int> result = strange_sort_list({111, 11, 11111});
    if (issame(result, {11, 111, 11111})) {
        std::cout << "Output is correct.\n";
    } else {
        std::cout << "Output is incorrect.\n";
    }
    return 0;
}