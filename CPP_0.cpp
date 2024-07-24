#include <iostream>
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
    vector<float> numbers{3.5, 1.2, 4.3, 2.8};
    float threshold = 1.0;

    bool result = has_close_elements(numbers, threshold);
    
    if (result) {
        cout << "Close elements found within threshold." << endl;
    } else {
        cout << "No close elements found within threshold." << endl;
    }

    return 0;
}