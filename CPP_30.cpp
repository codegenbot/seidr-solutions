```cpp
#include <vector>
#include <assert.h>

using namespace std;

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), vector<float>()) == true); 
    return 0;
}