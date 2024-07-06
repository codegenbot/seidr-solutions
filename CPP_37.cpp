#include <vector>
#include <algorithm>

bool issame(vector<float> a,vector<float>b){
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            std::vector<float> evenVals(l.begin() + i, l.begin() + i + 1);
            sort(evenVals.begin(), evenVals.end());
            result.push_back(evenVals[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    assert (issame({-10.0f, 2.0f, 3.0f, 4.0f, 5.0f, 8.0f, 11.0f, 12.0f, 23}, sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10})));
    return 0;
}