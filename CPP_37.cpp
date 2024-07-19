#include <vector>
#include <cmath>

bool checkSame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!checkSame(a[i],b[i])){
            return false;
        }
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
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

int main() {
    vector<float> input = {5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f};
    vector<float> output = sort_even(input);
    for (float val : output) {
        cout << val << " ";
    }
    if (!issame(input,output)){
        cout << "\nTest case failed";
    } else{
        cout << "\nTest case passed";
    }
    return 0;
}