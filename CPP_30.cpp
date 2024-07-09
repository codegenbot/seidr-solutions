#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<vector<float>> b) {
    if(a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        bool same = true;
        for (int j = 0; j < a[i].size(); j++) {
            if(std::abs(a[i][j] - b[i][j]) > 1e-4) {
                same = false;
                break;
            }
        }
        if(!same) return false;
    }
    return true;
}