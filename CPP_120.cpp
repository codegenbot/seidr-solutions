#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size();i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<vector<int>> arr, int k) {
    vector<int> result(arr[0].begin(), arr[0].begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame({{1, 2, 3, -23, 243, -400, 0}, {0,1,2,-23,243,-400}} , {{0,1,2,-23,243,-400}});
    return 0;
}