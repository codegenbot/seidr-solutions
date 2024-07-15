#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<pair<int, int>> diff(n);
    
    for(int i = 1; i < n; i++) {
        diff[i].first = abs(v[i] - v[0]);
        diff[i].second = i;
        
        if(abs(v[n-1] - v[i]) < diff[i].first) {
            diff[i].first = abs(v[n-1] - v[i]);
        }
    }
    
    pair<int, int> minDiff = make_pair(INT_MAX, 0);
    for(int i = 1; i < n; i++) {
        if(diff[i].first <= minDiff.first) {
            minDiff = diff[i];
        }
    }
    
    vector<vector<int>> res(2);
    res[0].insert(res[0].end(), v.begin(), v.begin() + minDiff.second);
    res[1].insert(res[1].begin(), v.begin() + minDiff.second, v.end());
    
    return res;
}

int main() {
    vector<int> input;
    cout << "Enter the elements of the vector separated by spaces: ";
    string s;
    cin >> s;
    istringstream iss(s);
    int x;
    while (iss >> x) {
        input.push_back(x);
    }
    vector<vector<int>> result = cutVector(input);
    cout << "Cutting point is at index: " << result[1].size() - 1 << endl;
    for(int i = 0; i < 2; i++) {
        cout << "Subvector " << i + 1 << ": ";
        for(auto x : result[i])
            cout << x << " ";
        cout << endl;
    }
    return 0;
}