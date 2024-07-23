#include <vector>
using namespace std;

vector<int> cutVector(vector<int> vec) {
    int n = vec.size();
    for(int i=0; i<n-1; i++) {
        if(abs(vec[i] - vec[i+1]) <= 0) {
            return {vec, vector<int>(i, i)};
        }
    }
    int minDiff = INT_MAX;
    int pos = -1;
    for(int i=1; i<=n-2; i++) {
        int diff = abs(vec[0] - vec[i]) + abs(vec[i] - vec[n-1]);
        if(diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    return {vector<int>(vec, 0, pos), vector<int>(pos, n)};
}

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }
    vector<int> res = cutVector(vec);
    for(auto x:res) {
        cout << x << ' ';
    }
    return 0;
}