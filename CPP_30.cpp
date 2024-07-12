```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

// Function to check if two vectors are equal
bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    }
    return true;
}

// Function to get all positive elements from a vector
vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;

}
int main() {
    vector<float> input = {1, -2, 3, -4};
    assert(issame(get_positive(input), {}));  
    return 0;
}