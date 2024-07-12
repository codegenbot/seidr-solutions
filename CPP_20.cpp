#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = { numbers[0], numbers[1] };
    
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = { numbers[i], numbers[i + 1] };
        }
    }
    
    return { result.first, result.second };
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    // Sample usage
    vector<float> numbers = { 3.5, 1.2, 4.8, 2.7, 6.1, 2.9 };
    pair<float, float> closest_elements = find_closest_elements(numbers);
    cout << "Closest elements are: " << closest_elements.first << " and " << closest_elements.second << endl;

    vector<float> vec1 = { 1.1, 2.2, 3.3 };
    vector<float> vec2 = { 1.1, 2.2, 3.3 };
    bool are_equal = issame(vec1, vec2);
    cout << "Vectors equal: " << are_equal << endl;

    return 0;
}