#include <algorithm>
#include <limits>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    vector<float> closest_pair;
    
    for(int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if(diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return closest_pair;
}

int main() {
    assert(std::equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}).begin(), find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}).end(), {2.2, 3.1}.begin()));
    return 0;
}