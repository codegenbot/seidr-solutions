#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < n; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += v[j];
        }
        
        for (int j = i + 1; j < n; j++) {
            sumRight += v[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + splitIndex + 1);
    vector<int> right(v.begin() + splitIndex, v.end());
    
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "Left: ";
    for (int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: ";
    for (int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}