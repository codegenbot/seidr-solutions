```cpp
#include <vector>
#include <cmath>
#include <assert.h>
#include <limits>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold){
    vector<size_t> indices;
    for(size_t i = 0; i < numbers.size(); i++){
        indices.push_back(i);
    }

    for(size_t i = 0; i < indices.size(); i++){
        for(size_t j = i + 1; j < indices.size(); j++){
            if(abs(numbers[indices[i]] - numbers[indices[j]]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    vector<float> a(6); a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert (has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);
    return 0;
}