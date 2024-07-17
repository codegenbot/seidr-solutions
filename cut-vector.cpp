#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    for(int i = 0; i < n-1; i++) {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j <= i; j++) {
            leftSum += v[j];
        }
        for(int j = i+1; j < n; j++) {
            rightSum += v[j];
        }
        if(abs(leftSum-rightSum) == 0 || abs(leftSum-rightSum) < abs((n-1)/2-(n-1)/2)) {
            return {{v[0],v[0]}, v.substr(1)};
        }
    }
    // If no cut is found, the entire vector is one subvector
    return {{}, v};
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> res = cutVector(v);
    cout << "[";

    if(res.first.size() > 0) {
        for(int i = 0; i < res.first.size(); i++) {
            cout << res.first[i] << (i == res.first.size()-1 ? "" : ",");
        }
        cout << "] [";  
    } else {
        cout << "] [";
    }

    if(res.second.size() > 0) {
        for(int i = 0; i < res.second.size(); i++) {
            cout << res.second[i] << (i == res.second.size()-1 ? "" : ",");
        }
        cout << "]\n";
    } else {
        cout << "]\n";
    }

    return 0;
}