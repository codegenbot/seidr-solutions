#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        assert(!isnan(num));
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}