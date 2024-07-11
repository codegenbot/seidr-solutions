```
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size(); i++) {
        for (int j = i + 1; j < lst.size(); j++) {
            if (lst[i] > lst[j]) {
                int temp = lst[i];
                lst[i] = lst[j];
                lst[j] = temp;
            }
        }
    }
    return lst;
}