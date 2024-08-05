#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    std::cout << "Test passed successfully." << std::endl;
    return 0;
}