#include <algorithm>
#include <vector>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualoppers"
#include <initializer_list>
#pragma GCC diagnostic pop

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}