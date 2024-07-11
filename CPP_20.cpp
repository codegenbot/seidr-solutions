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
    vector<float> numbers = {0.7, 5.3, 0.2, 4.2};
    assert(find_closest_elements(numbers) == vector<float>(1, 0.7) || find_closest_elements(numbers) == vector<float>(1, 0.2) || find_closest_elements(numbers) == vector<float>(1, 0.7));
    return 0;
}