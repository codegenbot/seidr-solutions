#include <algorithm>
#include <vector>
#include <numeric>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());
    int min = *std::min_element(lst.begin(), lst.end());
    int max = *std::max_element(lst.begin(), lst.end());

    while (!lst.empty()) {
        for (int i : lst) {
            if (i == min) {
                result.push_back(i);
                lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                break;
            }
        }
        for (int i : lst) {
            if (i == max) {
                result.push_back(i);
                lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                break;
            }
        }
    }

    return result;
}