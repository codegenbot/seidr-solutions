#include <vector>
#include <cmath>

bool checkSame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

bool issame(const std::vector<float>& a){
    for (int i = 0; i < a.size(); i++) {
        if (!checkSame(a[i],a[i+1])){
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float maxEven = -INFINITY;
            for (float val : l) {
                if (checkSame(val, static_cast<int>(val))) {
                    maxEven = std::max(maxEven, val);
                }
            }
            result.push_back(maxEven);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

#include <limits>
using namespace std;
const double INFINITY = numeric_limits<double>::max();

int main() {
    std::vector<float> input = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    std::vector<float> output = sort_even(input);
    for (float val : output) {
        cout << val << " ";
    }
    assert(issame(output));
    if (!issame({output})) {
        cout << "\nTest case failed";
    } else{
        cout << "\nTest case passed";
    }
    return 0;
}