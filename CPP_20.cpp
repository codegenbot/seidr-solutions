#include <iostream>
#include <vector>
#include <algorithm>

bool issame(pair<float, float> a, pair<float, float> b){
    return a.first == b.first && a.second == b.second;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
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
    vector<float> numbers = {3.5, 2.0, 7.1, 4.3, 1.8};
    pair<float, float> result = find_closest_elements(numbers);
    if (issame(result, {2.0, 3.5})) {
        cout << "Correct"; 
    } else {
        cout << "Incorrect"; 
    }
    return 0;
}