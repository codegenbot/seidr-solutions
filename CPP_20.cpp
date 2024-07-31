#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers);

bool issame(pair<float, float> a, pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; i++) {
        if(numbers[i+1] - numbers[i] < min_diff) {
            min_diff = numbers[i+1] - numbers[i];
            closest_elements = {numbers[i], numbers[i+1]};
        }
    }
    return closest_elements;
}

int main() {
    vector<float> numbers = {2.5, 1.3, 8.7, 4.2, 7.1};
    pair<float, float> result = find_closest_elements(numbers);
    cout << "Closest elements: " << result.first << ", " << result.second << endl;
    
    return 0;
}