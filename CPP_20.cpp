```cpp
#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <initializer_list>
#include <utility>

bool issame(vector<float> a,vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon()) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw runtime_error("Vector must have at least two elements");
    }
    
    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    
    return vector<float>({closest_pair.first, closest_pair.second});
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == vector<float>({2.2, 2.2}));
}