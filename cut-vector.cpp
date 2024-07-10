#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int index = -1;
    for(int i=0; i<vec.size()-1; i++) {
        int diff = abs(vec[i] - vec[i+1]);
        if(diff <= minDiff) {
            minDiff = diff;
            index = i;
        }
    }
    
    vector<int> leftVec, rightVec;
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
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(vec);
    
    cout << "[";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << "]" << endl;
    
    cout << "[";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << "0]" << endl;
    
    return 0;
}