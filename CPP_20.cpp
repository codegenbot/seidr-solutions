#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(),
                                            [&b](float x) { return find(b.begin(), b.end(), x) != b.end(); });
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closest_pair.begin(), closest_pair.end());
}

int main() {
    assert(issame({2.2, 3.1}, find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1})));
    return 0;
}