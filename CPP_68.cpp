#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            result.push_back({arr[i], i});
        }
    }

    return result;
}