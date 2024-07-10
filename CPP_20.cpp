```c++
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return closest_pair;
}

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); ++i)
        if(std::abs(a[i] - b[i]) > 1e-5f)
            return false;
        
    return true;
}

int main() {
    assert(areSame({1.1, 2.2, 3.1, 4.1, 5.1}, {2.2, 3.1}));
}