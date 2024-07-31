#include <cassert>
#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        assert(num > 0);
        result.push_back(num);
    }
    return result;
}