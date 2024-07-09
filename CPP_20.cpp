#include <vector>
#include <numeric>
#include <limits>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-6) {
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j <= numbers.size(); ++j) {
            vector<float> a(numbers.begin(), numbers.begin() + i);
            vector<float> b(numbers.begin() + i, numbers.end());
            
            if (issame(a, b)) {
                pair<float, float> closest_pair;
                float min_diff = numeric_limits<float>::max();
                
                for (int k = 0; k < a.size(); ++k) {
                    for (int l = k + 1; l <= a.size(); ++l) {
                        float diff = abs(a[k] - a[l]);
                        if (diff < min_diff) {
                            min_diff = diff;
                            closest_pair = make_pair(min(a[k], a[l]), max(a[k], a[l]));
                        }
                    }
                }
                
                result.push_back(closest_pair);
            }
        }
    }
    
    return result;
}