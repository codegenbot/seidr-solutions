#include <vector>
#include <numeric>
#include <limits>
#include <algorithm>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            pair<float, float> current_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            bool is_same = false;
            for(auto& p : result) {
                if(issame({p.first, p.second}, {current_pair.first, current_pair.second})) {
                    is_same = true; break;
                }
            }
            if(!is_same) result.push_back(current_pair);
        }
    }
    return result;
}