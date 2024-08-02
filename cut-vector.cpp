#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int n = vec.size();
    pair<vector<int>, vector<int>> res;
    
    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        if (leftSum == rightSum) {
            res.first = vector<int>(vec.begin(), vec.begin() + i);
            res.second = vector<int>(vec.begin() + i, vec.end());
            return res;
        }
    }
    
    int minDiff = INT_MAX, cutIndex = 0;
    for (int i = 1; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j < i; j++) {
            leftSum += vec[j];
        }
        for (int j = i; j < n; j++) {
            rightSum += vec[j];
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    res.first = vector<int>(vec.begin(), vec.begin() + cutIndex);
    res.second = vector<int>(vec.begin() + cutIndex, vec.end());
    return res;
}

int main() {
    // Write your test cases here
    vector<int> vec1 = {1};
    pair<vector<int>, vector<int>> res1 = cutVector(vec1);
    cout << "Input: ";
    for (int i : vec1) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Output: ";
    for (int i : res1.first) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : res1.second) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec2 = {1, 10};
    pair<vector<int>, vector<int>> res2 = cutVector(vec2);
    cout << "Input: ";
    for (int i : vec2) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Output: ";
    for (int i : res1.first) {
        cout << i << " ";
    }
    cout << endl;
    for (int i : res2.second) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}