#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    for (int i = 1; i < vec.size(); i++) {
        int diff = abs(vec[i-1] - vec[i]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    return {vector<int>(vec.begin(), vec.begin() + cutIndex), vector<int>(vec.begin() + cutIndex, vec.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << "0 ";
    for (int i = 0; i < n - result.second.size(); i++) {
        cout << "0 ";
    }
    cout << endl;
    
    return 0;
}