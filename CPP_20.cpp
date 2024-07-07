```cpp
#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> numbers;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        float x;
        cin >> x;
        numbers.push_back(x);
    }

    if(issame({1.0f, 3.0f}, find_closest_elements(numbers))) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}