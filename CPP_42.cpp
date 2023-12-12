```cpp
#include <vector>
#include <algorithm>

std::vector<int> incr_list(const std::vector& v) {
    // Create a new vector with the same size as the input vector
    std::vector<int> result(v.size());
    
    // Iterate over the elements of the input vector and increment each element by 1
    for (int i = 0; i < v.size(); ++i) {
        result[i] = v[i] + 1;
    }
    
    return result;
}

bool issame(const std::vector& a, const std::vector& b) {
    return (a == b);
}

int main() {
    // Call the incr_list function and assign its result to a vector variable
    std::vector<int> v2 = incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123});
    
    // Call the issame function with the two vectors as input and assert that they are equal
    assert(issame(v2, {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    
    return 0;
}
```