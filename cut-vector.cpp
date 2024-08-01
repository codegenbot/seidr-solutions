#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int min_diff = INT_MAX;
    int index = -1;
    
    for(int i=0; i<n-1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff < min_diff) {
            min_diff = diff;
            index = i;
        }
    }
    
    vector<int> left, right;
    copy(vec.begin(), vec.begin() + index+1, back_inserter(right));
    copy(vec.begin(), vec.begin() + index, back_inserter(left));
    
    return make_pair(left, right);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "Left: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}