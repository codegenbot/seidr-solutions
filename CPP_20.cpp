#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    return make_pair(closest_elements.first, closest_elements.second);
}

int main(){
    vector<float> numbers = {3.5, 2.1, 8.9, 1.2, 6.7};
    pair<float, float> result = find_closest_elements(numbers);
    cout << "Closest elements are: " << result.first << " and " << result.second << endl;
  
    return 0;
}