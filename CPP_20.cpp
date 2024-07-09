#include <vector>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    pair<float, float> result = make_pair(numbers[0], numbers[0]);
    
    for (int i = 1; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < abs(result.first - result.second)) {
                result = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    
    return result;
}