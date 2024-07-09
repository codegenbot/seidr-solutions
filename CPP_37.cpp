```cpp
#include <vector>
#include <algorithm>

bool sameVectors(std::vector<float> a, std::vector<float> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back(l[j]);
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

int main() {
    std::vector<float> vec = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> result(vec.size());
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            while (!sort_even(vec).empty()) {
                if (sort_even(vec).size() > 1) {
                    result[i] = sort_even(vec)[0];
                    sort_even(vec).erase(sort_even(vec).begin());
                } else {
                    result[i] = sort_even(vec)[0];
                    sort_even(vec).pop_back();
                }
            }
        } else {
            result[i] = vec[i];
        }
    }
    
    std::vector<float> sortedEven = sort_even(vec);
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            while (!sortedEven.empty()) {
                if (sortedEven.size() > 1) {
                    result[i] = sortedEven[0];
                    sortedEven.erase(sortedEven.begin());
                } else {
                    result[i] = sortedEven[0];
                    sortedEven.pop_back();
                }
            }
        } else {
            result[i] = vec[i];
        }
    }
    
    assert(sameVectors(sort_even(vec), { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10 }));
    return 0;
}