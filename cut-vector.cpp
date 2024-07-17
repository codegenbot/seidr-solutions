#include <climits>
#include <vector>
#include <initializer_list>

using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= v.size(); i++) {
        if(i == v.size()) {
            vector<int> left(v.begin(), v.end());
            vector<int> right({});
            int diff = abs(left[0] - 0);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        } else {
            vector<int> left(v.begin(), v.begin() + i);
            vector<int> right(v.begin() + i, v.end());
            int diff = abs(left[0] - right[0]);
            if(diff < min_diff) {
                min_diff = diff;
                pos = i;
            }
        }
    }
    
    vector<vector<int>> result(2);
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

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto result = cutVector(v);
    // Use the result here
    return 0;
}