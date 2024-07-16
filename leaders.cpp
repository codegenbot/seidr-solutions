```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& v) {
    int n = v.size();
    vector<int> res;
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(v[j] >= v[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(v[i]);
    }
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