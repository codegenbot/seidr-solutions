```cpp
#include <algorithm>
#include <assert.h>
#include <vector>

bool areSame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

std::vector<int> sort_third(std::vector<int> vector) {
    std::vector<int> result;
    for (int i = 0; i < vector.size(); i++) {
        if (i % 3 == 0) {
            // values at the indices that are divisible by three are equal to the values of the corresponding indicies of vector, but sorted
            std::vector<int> temp;
            for (int j = i; j < vector.size() && j % 3 == 0; j++) {
                temp.push_back(vector[j]);
            }
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
        } else {
            result.push_back(vector[i]);
        }
    }
    return result;
}