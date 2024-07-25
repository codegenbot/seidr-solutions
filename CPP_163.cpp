#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> filter_even_numbers(std::vector<int> a) {
    std::vector<int> result;
    for(int i : a) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

assert(issame(filter_even_numbers(generate_integers(17, 89)), std::vector<int>{}));