```cpp
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}

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

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
}