#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.rbegin(), result.rend());
    for(int i = 0; i < k; i++){
        cout << result[i] << endl;
    }
}