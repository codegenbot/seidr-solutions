#include <vector>
#include <algorithm>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    sort_array(a);
    sort_array(b);

    return a == b;
}