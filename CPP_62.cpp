#include <vector>
#include <cmath>

using namespace std;

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}