#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int> arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = arr[n-1];
    result.push_back(max_right);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    vector<int> result = leaders(arr);
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}