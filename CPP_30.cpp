```cpp
#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::vector<float> b) {
    // Define your comparison logic here
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}