#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int sumLeft = 0, sumRight = 0;
        
        for (int j = 0; j <= i; j++) {
            sumLeft += vec[j];
        }
        
        for (int j = i + 1; j < vec.size(); j++) {
            sumRight += vec[j];
        }
        
        int diff = abs(sumLeft - sumRight);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    
    for (int i = 0; i <= cutIndex; i++) {
        leftVec.push_back(vec[i]);
    }
    
    for (int i = cutIndex + 1; i < vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    
    return {leftVec, rightVec};
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    pair<vector<int>, vector<int>> result = cutVector(vec);
    for (auto i : result.first) {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : result.second) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}