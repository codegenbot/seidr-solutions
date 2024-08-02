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

vector< vector<int> > maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    vector< vector<int> > result(1);
    for(int i = 0; i < k; i++){
        result[0].push_back(arr[arr.size() - 1 - i]);
    }
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {0, -23, 1, 2, 3, 243, -400}));
    cout << "Maximum elements: ";
    for(int i = 0; i < maximum({1, 2, 3, -23, 243, -400, 0}, 7)[0].size(); i++){
        cout << maximum({1, 2, 3, -23, 243, -400, 0}, 7)[0][i] << " ";
    }
    return 0;
}