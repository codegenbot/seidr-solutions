```cpp
#include <climits>
#include <vector>

using namespace std;

std::vector<std::vector<int>> cutVector(std::vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= v.size(); i++) {
        if(i == v.size()) {
            vector<int> left(v.begin(), v.begin());
            vector<int> right(v.begin() + i, v.end());
            int diff = abs((int)left[0] - (int)right[0]);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        } else {
            vector<int> left(v.begin(), v.begin() + i);
            vector<int> right(v.begin() + i, v.end());
            int diff = abs((int)left[0] - (int)right[0]);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        }
    }
    
    std::vector<std::vector<int>> result(2);
    result[0].resize(pos);
    for(int i = 0; i < pos; i++) {
        result[0].push_back(v[i]);
    }
    result[1].resize(v.size() - pos);
    for(int i = pos; i < v.size(); i++) {
        result[1].push_back(v[i]);
    }
    
    return result;
}