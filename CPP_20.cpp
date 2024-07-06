#include <vector>

bool isSame(std::vector<std::vector<float>> a, std::vector<std::vector<float>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j < a[i].size(); ++j) {
            if(abs(a[i][j] - b[i][j]) > 1e-5f) return false;
        }
    }
    return true;