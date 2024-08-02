#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<vector<int>> arr, int k) {
    vector<int> result(arr[0].begin(), arr[0].begin() + k);
    sort(result.begin(), result.end());
    return result;
}

int main(){
    assert(issame(maximum({{1, 2, 3, -23, 243, -400, 0},{4,5,6,7,8,9,10}}, 7) , {0, -23, 1, 2, 3, 243, -400}));
    cout << "Maximum elements: ";
    for(int i = 0; i < maximum({{1, 2, 3, -23, 243, -400, 0},{4,5,6,7,8,9,10}}, 7).size(); i++){
        cout << maximum({{1, 2, 3, -23, 243, -400, 0},{4,5,6,7,8,9,10}}, 7)[i] << " ";
    }
    return 0;
}