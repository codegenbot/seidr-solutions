#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

bool issame(float a, float b) {
    return (abs(a-b)<0.0001);
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff && issame(numbers[i], round(numbers[i]))&&issame(numbers[i+1],round(numbers[i+1]))) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closest_pair.begin(), closest_pair.end());
}

int main() {
    // Your main function goes here
}