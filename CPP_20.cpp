#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}

int main() {
    vector<float> numbers;
    // Read input from user
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        numbers.push_back(num);
    }

    float min_diff = std::numeric_limits<float>::max();
    float closest1 = 0;
    float closest2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }

    vector<float> result({closest1, closest2});
    return 0;
}