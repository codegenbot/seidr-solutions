#include <vector>
using namespace std;

vector<int> leaders(vector<int> arr) {
    vector<int> result;
    int n = arr.size();
    int rightmost_leader = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
        }
    }

    result.push_back(rightmost_leader);
    for(int i=0; i<n-1; i++) {
        if(arr[i] >= rightmost_leader) {
            result.push_back(arr[i]);
            rightmost_leader = arr[i];
        }
    }

    return result;
}