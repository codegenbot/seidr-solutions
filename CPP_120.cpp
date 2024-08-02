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
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < min(k, (int)arr.size()); i++){
        vector<int> temp(1);
        temp[0] = arr[arr.size() - i - 1];
        result.push_back(temp);
    }
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7) , {vector<int>({0}), vector<int>({-23}), vector<int>({-400}), vector<int>({-400}), vector<int>({-400}), vector<int>({-400}), vector<int>({-400})}));
    cout << "Maximum elements: ";
    for(int i = 0; i < maximum({1, 2, 3, -23, 243, -400, 0}, 7).size(); i++){
        for(int j = 0; j < maximum({1, 2, 3, -23, 243, -400, 0}, 7)[i].size(); j++){
            cout << maximum({1, 2, 3, -23, 243, -400, 0}, 7)[i][j] << " ";
        }
    }
    return 0;
}