#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int max_right = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= max_right){
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }

    return res;
}