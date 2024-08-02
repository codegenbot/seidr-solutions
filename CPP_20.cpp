```cpp
#include <algorithm>
#include <cassert>

bool issame(vector<float> a,vector<float>b){
    return a.size()==b.size() && equal(a.begin(),a.end(),b.begin());
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    if (numbers.size() <= 1) {
        return result;
    }
    
    sort(numbers.begin(), numbers.end());
    
    pair<float, float> closest = make_pair(numbers[0], numbers[0]);
    
    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < closest.second - closest.first) {
            closest = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    
    result.push_back(closest);
    
    return result;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == {make_pair(2.2, 3.1)});
    return 0;
}