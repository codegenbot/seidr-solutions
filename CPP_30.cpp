#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b){
    for (size_t i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}