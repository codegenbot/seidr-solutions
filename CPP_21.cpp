#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool issame(std::vector<float> a, std::vector<float> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-4) return false;
    }
    return true;
}

int main() {
    assert(issame(vector<float>{12.0, 11.0, 15.0, 13.0, 14.0}, {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}

int main2(){
    assert(issame(vector<float>{12.0, 11.0, 15.0, 13.0, 14.0}, {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}