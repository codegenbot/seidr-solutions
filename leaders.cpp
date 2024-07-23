#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 2, 8};
    vector<int> res = leaders(v);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    for(int i = v.size() -1; i >= 0; --i){
        if(res.empty() || v[i] >= res.back()){
            res.push_back(v[i]);
        }
    }
    return res;
}