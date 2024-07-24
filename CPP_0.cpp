#include <algorithm>
#include <vector>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> numbers = {1.5, 2.3, 3.7, 4.1, 5.9};
    float threshold = 1.0;
    
    bool result = has_close_elements(numbers, threshold);
    
    return 0;
}