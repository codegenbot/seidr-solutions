#include <algorithm>
#include <vector>
#include <iterator>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Add your comparison logic here
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    std::vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}) , {}));
    // Add more test cases if needed
    return 0;
}