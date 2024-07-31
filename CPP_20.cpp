#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool issame(pair<float, float> a, pair<float, float> b){
    return (a.first == b.first && a.second == b.second);
}

pair<float, float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; i++){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            closest_elements = {numbers[i], numbers[i+1]};
        }
    }
    return closest_elements;
}

int main() {
    // Test the function
    vector<float> test_numbers = {3.5, 1.2, 4.8, 2.9, 5.1};
    pair<float, float> result = find_closest_elements(test_numbers);
    cout << "Closest elements: " << result.first << " and " << result.second << endl;

    return 0;
}