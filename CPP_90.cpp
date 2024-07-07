#include <algorithm>
#include <vector>

int main() {
    int result = next_smallest({-35, 34, 12, -45});
    return 0;
}

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    auto it = std::next(std::min_element(copy.begin(), copy.end()));
    return *it == copy[0] ? -1 : *(prev(it));
}