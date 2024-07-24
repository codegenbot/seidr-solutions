#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5f) == false);
    
    vector<float> b = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    assert(has_close_elements(b, 0.5f) == false);
    
    return 0;
}