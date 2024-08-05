#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    pair<vector<int>, vector<int>> result;
    
    for (int i = 1; i <= vec.size(); i++) {
        vector<int> left(vec.begin(), vec.begin() + i);
        vector<int> right(vec.begin() + i, vec.end());
        
        int diff = abs((int)accumulate(left.begin(), left.end(), 0) - (int)accumulate(right.begin(), right.end(), 0));
        
        if (diff < min_diff) {
            min_diff = diff;
            result = make_pair(left, right);
        }
    }
    
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

    cout << "Left: ";
    for (int num : res.first) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Right: ";
    for (int num : res.second) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}