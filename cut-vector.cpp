#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = 0;
    
    for(int i = 1; i <= vec.size(); i++) {
        if(i == vec.size() || vec[i-1] != vec[i]) {
            int diff = abs((i > 0 ? vec[0] : 0) - (vec.size() > i ? vec.back() : 0));
            if(diff < minDiff) {
                minDiff = diff;
                pos = i;
            }
        }
    }
    
    vector<int> left(vec.begin(), vec.begin()+pos);
    vector<int> right(vec.begin()+pos, vec.end());
    return {left, right};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &x : vec) cin >> x;

    pair<vector<int>, vector<int>> res = cutVector(vec);

    cout << res.first.size() << endl;
    for(int x:res.first) cout << x<< " ";
    cout << endl;

    cout << res.second.size() << endl;
    for(int x:res.second) cout << x << " ";
    cout << endl;

    return 0;
}