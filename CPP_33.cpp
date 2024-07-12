```cpp
#include <algorithm>
#include <vector>
#include <assert.h>

bool same(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            // values at the indices that are divisible by three are equal to the values of the corresponding indicies of l, but sorted
            std::vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            if (!same(temp, result)) {
                assert(false);
            }
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}