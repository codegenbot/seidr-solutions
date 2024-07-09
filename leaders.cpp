#include <vector>
using namespace std;

int main() {
    vector<int> v = {17, 112, 5, 13};
    vector<int> result = leaders(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int> v) {
    int n = v.size();
    vector<int> res;
    if(n==1)
        return v;
    res.push_back(v[n-1]);
    for(int i=n-2; i>=0; i--){
        if(v[i] >= res.back())
            res.push_back(v[i]);
    }
    return res;
}