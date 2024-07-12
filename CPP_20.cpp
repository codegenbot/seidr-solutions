#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> testInput = {3.5, 1.2, 4.8, 2.1, 6.7};
    vector<float> expectedOutput = {3.5, 4.8};

    vector<float> actualOutput = find_closest_elements(testInput);

    if(issame(actualOutput, expectedOutput)) {
        cout << "Test passed successfully." << endl;
    } else {
        cout << "Test failed." << endl;
    }

    return 0;
}