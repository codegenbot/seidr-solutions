#include <iostream>
#include <vector>
#include <cassert>

namespace my_namespace {
    std::vector<int> incr_list(const std::vector<int>& input) {
        std::vector<int> output;
        for (int num : input) {
            output.push_back(num + 1);
        }
        return output;
    }

    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}

int main() {
    using namespace my_namespace;
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
}