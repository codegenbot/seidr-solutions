#include <vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    vector<float> result(2);
    result[0] = closest_pair[0];
    result[1] = closest_pair[1];

    return result;
}