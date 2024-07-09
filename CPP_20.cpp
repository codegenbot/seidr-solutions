#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> closest;
    for (int i = 1; i < numbers.size(); ++i) {
        if (abs(numbers[i] - numbers[i-1]) < abs(numbers[closest.empty() ? i : distance(closest.begin(), min_element(closest.begin(), close(closest.end())))] - numbers[i])) {
            closest.clear();
            closest.emplace_back(numbers[i-1], numbers[i]);
        } else if (abs(numbers[i] - numbers[i-1]) == abs(numbers[closest.empty() ? i : distance(closest.begin(), min_element(closest.begin(), close(closest.end())))] - numbers[i])) {
            closest.emplace_back(numbers[i-1], numbers[i]);
        }
    }
    return closest;
}