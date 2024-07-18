#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}