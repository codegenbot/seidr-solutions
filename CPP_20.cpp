#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    float num1, num2;
    for (int i = 0; i < numbers.size(); i++){
        for (int j = i + 1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff){
                min_diff = diff;
                num1 = min(numbers[i], numbers[j]);
                num2 = max(numbers[i], numbers[j]);
            }
        }
    }
    return {num1, num2};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    // Add more test cases here
    return 0;
}