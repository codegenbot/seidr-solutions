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

vector<vector<int>> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), min(arr.begin() + k, arr.end()));
    sort(result.begin(), result.end());
    return {result};
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {{0, -23, 1, 2, 3, 243, -400}});

    vector<int> maxElements = maximum({1, 2, 3, -23, 243, -400, 0}, 7)[0];
    cout << "Maximum elements: ";
    for(int i = 0; i < maxElements.size(); i++){
        cout << maxElements[i] << " ";
    }
    return 0;
}