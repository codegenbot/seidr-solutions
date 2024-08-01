#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<int>& l) {
    std::vector<int> even_values;
    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    std::sort(even_values.begin(), even_values.end());
    int even_index = 0;
    for (int i = 0; i < l.size(); i += 2) {
        l[i] = even_values[even_index];
        even_index++;
    }
}

int main() {
    std::vector<int> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(l);
    assert(l == std::vector<int>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10});
    return 0;
}