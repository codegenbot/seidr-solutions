#include <algorithm>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> v) {
    vector<int> res;
    for(int i = v.size()-1; i>=0; --i){
        res.push_back(v[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 1, 5};
    vector<int> result = leaders(v);
    for (int x : result) cout << x << " ";
    return 0;
}