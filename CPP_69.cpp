#include <vector>

int search(std::vector<int> lst) {
    int max = -1;
    for (int i : lst) {
        if (i > 0 && std::count(lst.begin(), lst.end(), i) == i) {
            max = i;
        }
    }
    return max;
}