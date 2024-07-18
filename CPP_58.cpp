#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::vector<int> result;
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return !result.empty();
}

void common(std::vector<int> l1, std::vector<int> l2) {
    if (issame(l1, l2)) {
        std::cout << "The two vectors have common elements." << std::endl;
    } else {
        std::cout << "The two vectors do not have common elements." << std::endl;
    }
}

int main() {
    // Test your common function here
    return 0;
}