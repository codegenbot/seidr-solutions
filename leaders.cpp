#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        bool flag = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                flag = false;
                break;
            }
        }
        if(flag) result.push_back(arr[i]);
    }
    
    return result;
}