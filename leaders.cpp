#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        int rightmost_leader = arr[i];
        bool is_leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= rightmost_leader) {
                is_leader = false;
                break;
            }
        }
        if(is_leader) {
            result.push_back(rightmost_leader);
        }
    }
    return result;
}