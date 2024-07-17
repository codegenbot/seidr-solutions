#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    pair<int, int> res;
    
    for (int i = 1; i <= v.size(); i++) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            right_sum += v[j];
        }
        
        if (left_sum == right_sum) {
            return {{v.begin(), v.begin() + i}, {v.begin() + i, v.end()}};
        } else if (abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            res = {make_pair(v.begin(), v.begin() + i), make_pair(v.begin() + i, v.end())};
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for(int i=0; i < result.first.size(); i++){
        if(i==result.first.size()-1) cout<<result.first[i]<<"]\n";
        else cout<<result.first[i]<<", ";
    }
    cout << "[";
    for(int i=0; i < result.second.size(); i++){
        if(i==result.second.size()-1) cout<<result.second[i]<<"]\n";
        else cout<<result.second[i]<<", ";
    }
    return 0;
}