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
    vector<float> numbers = {1.2, 3.4, 2.0, 5.6, 4.8};
    float threshold = 1.0;
    bool result = has_close_elements(numbers, threshold);
    return 0;
}