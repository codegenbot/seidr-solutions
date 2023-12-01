#include <vector>
#include <cassert>

bool issame(vector<float> a, vector <float> b){
    vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}