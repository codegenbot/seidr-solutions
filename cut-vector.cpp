Here is the completed code:

#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int splitPoint = 0;
    
    for (int i = 1; i < vec.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        
        for (int j = i; j < vec.size(); j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitPoint = i;
        }
    }
    
    return {{vec.begin(), vec.begin() + splitPoint}, {vec.begin() + splitPoint, vec.end()}};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<vector<int>> result = cutVector(vec);
    
    cout << "({";
    for (int num : result[0]) {
        cout << num << ", ";
    }
    cout << "}) (" << " {";
    for (int num : result[1]) {
        cout << num << ", ";
    }
    cout << "0)" << endl;
    
    return 0;
}