#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = make_pair(numbers[0], numbers[1]);
    for(int i = 1; i < numbers.size() - 1; ++i){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            result = make_pair(numbers[i], numbers[i+1]);
        }
    }
    return {result.first, result.second};
}

int main() {
    vector<float> numbers = {1.5, 2.3, 0.8, 3.1, 4.7};
    pair<float, float> closest_elements = find_closest_elements(numbers);
    cout << "Closest elements are: " << closest_elements.first << " and " << closest_elements.second << endl;
    
    return 0;
}