#include <algorithm>
#include <vector>
#include <cctype>

bool issame(int x, int y) {
    if (x % 2 == 0 && y % 2 != 0 || x % 2 != 0 && y % 2 == 0)
        return true;
    else
        return false;
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