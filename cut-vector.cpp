#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    pair<vector<int>, vector<int>> result;
    for(int i = 0; i < n; i++) {
        if(i == n-1 || v[i] != v[i+1]) {
            int leftSum = 0, rightSum = 0;
            for(int j = 0; j <= i; j++) {
                leftSum += v[j];
            }
            for(int j = i+1; j < n; j++) {
                rightSum += v[j];
            }
            if(i == 0 || (leftSum == rightSum)) {
                result.first = vector<int>(v.begin(), v.begin() + i+1);
                result.second = vector<int>(v.begin() + i+1, v.end());
                return result;
            } else {
                int minDiff = INT_MAX;
                for(int j = i; j < n-1; j++) {
                    leftSum -= v[i];
                    rightSum += v[j+1];
                    if(abs(leftSum - rightSum) < minDiff) {
                        minDiff = abs(leftSum - rightSum);
                        result.first = vector<int>(v.begin(), v.begin() + j+1);
                        result.second = vector<int>(v.begin() + j+1, v.end());
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    pair<vector<int>, vector<int>> result = cutVector(v);
    cout << "First: ";
    for(auto x : result.first) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Second: ";
    for(auto x : result.second) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}