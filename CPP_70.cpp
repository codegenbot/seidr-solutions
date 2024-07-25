#include <algorithm>
#include <vector>
#include <iterator>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;

    if (lst.empty()) {
        return result;
    }

    sort(lst.begin(), lst.end());
    result.push_back(*min_element(lst.begin(), lst.end()));
    lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());

    while (!lst.empty()) {
        sort(lst.begin(), lst.end());
        result.push_back(*min_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());

        if (lst.size() == 1) {
            break;
        }
    }

    return result;
}