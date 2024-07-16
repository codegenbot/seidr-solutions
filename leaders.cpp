#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    int maxR = v[n-1];
    for(int i=n-1; i>=0; i--) {
        if(v[i] >= maxR) {
            res.push_back(v[i]);
            maxR = v[i];
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 2};
    vector<int> result = leaders(v);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}