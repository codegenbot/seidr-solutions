#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (auto& num : result) {
        num++;
    }
    return result;
}

int main() {
    std::vector<int> input = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expected_output = {6, 3, 6, 3, 4, 4, 10, 1, 124};
    
    assert(issame(incr_list(input), expected_output));
    
    return 0;
}