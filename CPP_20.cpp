#include <algorithm>
#include <limits>

vector<float> find_closest_elements(vector<float> numbers) {
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

bool areSame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

int main() {
    vector<float> numbers = {0.7, 0.5, 0.3};
    pair<float, float> closest_pair = find_closest_elements(numbers);
    assert(areSame({closest_pair.first, closest_pair.second}, {0.5f, 0.5f}));
    return 0;
}