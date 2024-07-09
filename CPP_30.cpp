#include <vector>

using namespace std;

vector<float> get_positive(vector<float> v) {
    vector<float> result;
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}