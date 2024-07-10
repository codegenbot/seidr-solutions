#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int>& vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> result;
    
    int minDiff = INT_MAX, splitIndex = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs((vec[i-1] + vec[i]) - (vec[0] + vec[n-1]));
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }

    result.first = vector<int>(vec.begin(), vec.begin() + splitIndex);
    result.second = vector<int>(vec.begin() + splitIndex, vec.end());
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    cout << "Subvector 1: ";
    for (int x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Subvector 2: ";
    for (int x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}