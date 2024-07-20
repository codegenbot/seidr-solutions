#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    int left = 0, right = 1;
    
    for(int i = 1; i < numbers.size(); i++) {
        if(abs(numbers[i] - numbers[i-1]) < min_diff) {
            min_diff = abs(numbers[i] - numbers[i-1]);
            left = i-1;
            right = i;
        }
    }
    
    return {numbers[left], numbers[right]};
}