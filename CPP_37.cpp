#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

bool isSameVectors(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::initializer_list<float>> sort_even(const std::vector<float>& l) {
    std::vector<std::initializer_list<float>> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back({l[j]});
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

int main() {
    std::vector<float> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<std::initializer_list<float>> result(vec.size());
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            result[i] = {{sort_even(vec)[0]}};
        } else {
            result[i] = {{vec[i]}};
        }
    }
    
    std::vector<std::initializer_list<float>> sortedEven = sort_even(vec);
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            result[i] = {sortedEven[0]};
            sortedEven.erase(sortedEven.begin());
        } else {
            result[i] = {{vec[i]}};
        }
    }
    
    std::vector<float> expected = { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10 };
    assert(isSameVectors({float(x) for x in *result}, {float(x) for x in *expected}));
    return 0;
}