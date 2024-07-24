#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for(int i=1; i<vec.size(); i++) {
        int diff = abs(vec[i] - vec[0]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }

    vector<int> leftVec = {vec[0]};
    vector<int> rightVec = vec;

    for(int i=1; i<pos; i++) {
        leftVec.push_back(vec[i]);
    }
    rightVec.erase(rightVec.begin() + pos, rightVec.end());

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
    cout << "Left Vec: ";
    for(int x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right Vec: ";
    for(int x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}