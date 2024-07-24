#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for(int i = 0; i < v.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        for(int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        for(int j = i+1; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        if(left_sum == right_sum) {
            return {{v[0], v[0]}, {v[1], v.back()}};
        } else {
            int diff = abs(left_sum - right_sum);
            if(diff < min_diff) {
                min_diff = diff;
                result.first = vector<int>(v.begin(), v.begin()+i+1);
                result.second = vector<int>(v.begin()+i, v.end());
            }
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    for(auto x : res.first) cout << x << " ";
    cout << endl;
    for(auto x : res.second) cout << x << " ";
    cout << endl;
    
    return 0;
}