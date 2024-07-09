#include <iostream>
using namespace std;

bool has_close_elements(vector<float> numbers, float threshold) {
    for (int i = 1; i < numbers.size(); i++) {
        if (abs(numbers[i] - numbers[i-1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a={1.0, 2.0, 3.9f, 4.0, 5.0, 2.2f};
    cout<<has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5)<<" ";
}