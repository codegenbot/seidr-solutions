#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.end());
    sort(result.begin(), result.end());
    for(int i=0; i<k; i++){
        cout << "Maximum number is: " << result[i] << endl;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    maximum(arr, k);
    return 0;
}