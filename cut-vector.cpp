#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for(int i = 0; i < v.size() - 1; i++) {
        if(abs(v[i] - v[i+1]) <= min_diff) {
            min_diff = abs(v[i] - v[i+1]);
            cut_index = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + (cut_index + 1), v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "[";
    for(int i = 0; i < result.first.size(); i++) {
        cout << result.first[i];
        if(i != result.first.size() - 1) {
            cout << ", ";
        }
    }
    cout << "], ["; 
    for(int i = 0; i < result.second.size(); i++) {
        cout << result.second[i];
        if(i != result.second.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}