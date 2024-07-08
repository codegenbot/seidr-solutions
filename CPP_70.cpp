#include <vector>
#include <algorithm>
#include <initializer_list>

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
    if (lst.size() == 0)
        return result;

    std::vector<int> temp(lst);
    std::sort(temp.begin(), temp.end());

    while (!temp.empty()) {
        result.push_back(*temp.begin());
        temp.erase(temp.begin());
        if (!temp.empty())
            std::sort(temp.begin(), temp.end());
    }

    return result;
}

int main() {
    std::vector<int> result = strange_sort_list({111111});
    if (issame(result, {11111})) {
        std::cout << "Output is correct.\n";
    } else {
        std::cout << "Output is incorrect.\n";
    }
    return 0;
}