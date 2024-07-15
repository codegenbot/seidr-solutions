#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> input;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int val;
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        input.push_back(val);
    }
    vector<vector<int>> result = cutVector(input);
    
    // Print the result
    for(int i = 0; i < 2; i++) {
        cout << "Subvector " << i + 1 << ": ";
        for(auto x : result[i])
            cout << x << " ";
        cout << endl;
    }
    
    return 0;
}

vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    int minDiff = INT_MAX, index = -1;
    for(int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j <= i; j++)
            leftSum += v[j];
        for(int j = i; j < n; j++)
            rightSum += v[j];
        
        int diff = abs(leftSum - rightSum);
        if(diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    for(int i = 0; i <= index; i++)
        leftVec.push_back(v[i]);
    for(int i = index + 1; i < n; i++)
        rightVec.push_back(v[i]);
    
    res[0] = leftVec;
    res[1] = rightVec;
    
    return res;
}