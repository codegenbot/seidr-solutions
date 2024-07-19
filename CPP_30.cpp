#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool isSameVector(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i]) - abs(b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> input) {
    vector<float> output;
    for (float x : input) {
        if (x >= 0) output.push_back(x);
    }
    return output;
}