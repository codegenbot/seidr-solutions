#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9f) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> numbers;
    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    vector<float> result = find_closest_elements(numbers);

    // Print the output
    cout << "The two closest elements are: ";
    for (float f : result) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    float closest1 = 0;
    float closest2 = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest1 = numbers[i];
                closest2 = numbers[j];
            }
        }
    }

    vector<float> result({closest1, closest2});
    return result;
}