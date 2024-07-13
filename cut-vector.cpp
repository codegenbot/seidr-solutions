#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    int minDiff = INT_MAX;
    int index;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; j++)
            leftSum += vec[j];
        for (int j = i + 1; j < n; j++)
            rightSum += vec[j];
        
        if (leftSum == rightSum) {
            return {{vec.begin(), vec.begin() + i}, {vec.begin() + i, vec.end()}};
        }
        else {
            int diff = abs(leftSum - rightSum);
            
            if (diff < minDiff) {
                minDiff = diff;
                index = i;
            }
        }
    }
    
    return {{vec.begin(), vec.begin() + index}, {vec.begin() + index, vec.end()}};
}

int main() {
    vector<int> vec;
    int num;
    
    cin >> num;
    while (num--) {
        cin >> num;
        vec.push_back(num);
    }
    
    vector<vector<int>> res = cutVector(vec);
    
    for (auto v : res) {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    
    return 0;
}