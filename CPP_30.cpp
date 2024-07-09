#include <vector>
#include <cmath>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        } else if (x < 0) {
            result.push_back(abs(x));
        }
    }
    return result;