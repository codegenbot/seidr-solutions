#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < vec.size(); ++i) {
        int leftSum = 0;
        int rightSum = 0;
        
        for(int j = 0; j < i; ++j)
            leftSum += vec[j];
        for(int j = i+1; j < vec.size(); ++j)
            rightSum += vec[j];
        
        int diff = abs(leftSum - rightSum);
        
        if(diff <= minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> leftVec;
    for(int i = 0; i < pos; ++i)
        leftVec.push_back(vec[i]);
    vector<int> rightVec(vec.begin() + pos, vec.end());
    
    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i = 0; i < n; ++i)
        cin >> vec[i];
    
    pair<vector<int>, vector<int>> res = cutVector(vec);
    
    cout << "Left vector: ";
    for(auto x : res.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right vector: ";
    for(auto x : res.second) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}