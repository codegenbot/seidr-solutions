#include <vector>
#include <cmath>

int has_close_elements(vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold)
                return 1;
        }
    }
    return 0;
}

int main() {
    vector<float> a={1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    cout << has_close_elements(a, 0.5f) << endl;
}