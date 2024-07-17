#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int index = -1;
    
    for (int i = 0; i < n; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j < i; j++)
            sumLeft += vec[j];
        for (int j = i + 1; j < n; j++)
            sumRight += vec[j];
        
        if (sumLeft == sumRight) {
            return {{vec[0], vec[0], vec.begin() + 1, vec.end()}};
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> left(vec.begin(), vec.begin() + index);
    vector<int> right(vec.begin() + index, vec.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
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