#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int main() {
    vector<int> arr = {5,2,8,12,3};
    int k = 4;

    vector<int> result = maximum(arr, k);

    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}