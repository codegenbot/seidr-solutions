#include <vector>
#include <cassert>
#include <memory>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integer(std::vector<int> values) {
    std::vector<int> result; 
    for (int value : values) {
        if(value != 0)
            result.push_back(value);
    }
    return result;
}

int main() {
    assert(issame(filter_integer({3, 3, 3}), {3, 3, 3}));
    return 0;
}