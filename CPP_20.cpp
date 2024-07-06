#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

bool find_closest_elements(std::vector<float> v, float target, float& closest, float& distance) {
    float d = INFINITY;
    for(float val : v) {
        if(abs(val - target) < d) {
            d = abs(val - target);
            closest = val;
        }
    }
}

int main() {
    std::vector<float> a = {1.1f, 2.2f, 3.1f, 4.1f, 5.1f};
    float target;
    std::cin >> target;

    float closest_element;
    float distance;

    find_closest_elements(a, target, closest_element, distance);

    assert(issame({closest_element}, {target}));

    return 0;
}