#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int index = 0;
    
    for(int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i] - vec[i-1]);
        
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    return {vector<int>(vec.begin(), vec.begin() + index), vector<int>(vec.begin() + index, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "#1: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "#2: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}