#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    pair<vector<int>, vector<int>> res;
    
    for(int i = 0; i < n; i++) {
        vector<int> left, right;
        for(int j = 0; j <= i; j++) {
            left.push_back(v[j]);
        }
        for(int j = i+1; j < n; j++) {
            right.push_back(v[j]);
        }
        
        int sum_left = 0, sum_right = 0;
        for(int j = 0; j < left.size(); j++) {
            sum_left += left[j];
        }
        for(int j = 0; j < right.size(); j++) {
            sum_right += right[j];
        }

        if(sum_left == sum_right) {
            res = {left, right};
            return res;
        }
    }
    
    vector<int> max_diff;
    int min_diff = INT_MAX;
    for(int i = 0; i < n; i++) {
        int left_sum = 0;
        for(int j = 0; j <= i; j++) {
            left_sum += v[j];
        }
        
        int right_sum = 0;
        for(int j = i+1; j < n; j++) {
            right_sum += v[j];
        }

        int diff = abs(left_sum - right_sum);
        if(diff < min_diff) {
            min_diff = diff;
            max_diff = {left_sum, right_sum};
        }
    }
    
    res.first = vector<int>(max_diff.begin(), max_diff.begin()+1);
    res.second = vector<int>(max_diff.begin()+1, max_diff.end());
    
    return res;
}

int main() {
    vector<int> v;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    
    pair<vector<int>, vector<int>> res = cutVector(v);
    
    cout << "[";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << "]\n[";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << "]";
    
    return 0;
}