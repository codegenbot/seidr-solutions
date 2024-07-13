#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> v) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for (int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    return {{v.begin(), v.begin() + cutIndex}, {v.begin() + cutIndex, v.end()}};
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &val : v) {
        cin >> val;
    }

    auto res = cutVector(v);

    cout << "[";
    for (int num : res[0]) {
        cout << num << " ";
    }
    cout << "]" << endl;

    cout << "[";
    for (int num : res[1]) {
        cout << num << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}