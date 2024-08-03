#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.begin(), result.end());
    for(int i = 0; i < k-1; i++){
        if(result[i] != result[k-1]){
            return vector<int>(1,result[k-1]);
        }
    }
    return vector<int>();
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 7), {0}));
    return 0;
}