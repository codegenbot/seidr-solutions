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
    vector<float> numbers = {1.5, 2.7, 3.3, 4.1, 5.8};
    float threshold = 0.5;

    if (has_close_elements(numbers, threshold)) {
        cout << "Close elements found within the threshold." << endl;
    } else {
        cout << "No close elements found within the threshold." << endl;
    }

    return 0;
}