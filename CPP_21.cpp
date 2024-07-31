#include <vector>
#include <cassert>
#include <cmath>
#include <algorithm>

using namespace std;

vector<float> rescale_to_unit(vector<float> vec) {
    float min_val = *min_element(vec.begin(), vec.end());
    float max_val = *max_element(vec.begin(), vec.end());
    vector<float> rescaled_vec;
    for (float val : vec) {
        rescaled_vec.push_back((val - min_val) / (max_val - min_val));
    }
    return rescaled_vec;
}