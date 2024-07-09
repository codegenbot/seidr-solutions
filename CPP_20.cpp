#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(pair<float, float> a, pair<float, float> b){
    return (a.first == b.first && a.second == b.second);
}

pair<float, float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair;
    float min_diff = numbers[1] - numbers[0];
    for(int i = 1; i < numbers.size(); ++i){
        if(numbers[i] - numbers[i-1] < min_diff){
            min_diff = numbers[i] - numbers[i-1];
            closest_pair = make_pair(numbers[i-1], numbers[i]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), make_pair(2.2, 3.1));
    return 0;
}