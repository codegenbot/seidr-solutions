#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if ((numbers[i + 1] - numbers[i]) < (numbers.back() - numbers[0])) {
            closest = {{numbers[i], numbers[i + 1]}};
            break;
        } else if ((numbers[i + 1] - numbers[i]) == (numbers.back() - numbers[0])) {
            closest = {{numbers[0], numbers.back()}};
            break;
        }
    }
    return closest;
}