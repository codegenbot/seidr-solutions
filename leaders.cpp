#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    // The rightmost element is always a leader.
    result.push_back(arr[n - 1]);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<result.size();i++){
        for(int j=i+1;j<result.size();j++){
            if(result[j]>result[i]){
                result.erase(result.begin()+i);
                break;
            }
        }
    }
    
    return result;
}