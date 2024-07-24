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
    vector<float> numbers = {1.2, 3.4, 5.6, 7.8, 9.0};
    float threshold = 2.0;
    
    if (has_close_elements(numbers, threshold)) {
        cout << "There are close elements within the threshold." << endl;
    } else {
        cout << "There are no close elements within the threshold." << endl;
    }
    
    return 0;
}