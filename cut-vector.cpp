#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int index = -1;
    
    for(int i=0; i<vec.size()-1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff < minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> leftVec;
    vector<int> rightVec;
    
    for(int i=0; i<index; i++) {
        leftVec.push_back(vec[i]);
    }
    for(int i=index+1; i<vec.size(); i++) {
        rightVec.push_back(vec[i]);
    }
    
    return make_pair(leftVec, rightVec);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &x : vec) cin >> x;
    pair<vector<int>, vector<int>> result = cutVector(vec);
    cout << "1 ";
    for(int x : result.first) cout << x << " ";
    cout << endl;
    cout << "0 ";
    for(int x : result.second) cout << x << " ";
    cout << endl;
    return 0;
}