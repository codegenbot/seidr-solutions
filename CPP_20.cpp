```cpp
#include <vector>
#include <numeric>
#include <algorithm>

bool issame(float f1, float f2) {
    if (f1 == f2)
        return true;
    return false;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = std::numeric_limits<float>::max();
    float closest_pair[2];

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }

    return {closest_pair[0], closest_pair[1]};
}

int main() {
    std::vector<float> numbers;
    // Read input from user
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }

    vector<float> closest_pair = find_closest_elements(numbers);

    // Verify the output manually
    cout << "Closest pair: ";
    for (float f : closest_pair) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}