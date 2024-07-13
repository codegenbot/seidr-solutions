#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    if(n == 0) return leaders;

    int rightmost_leader = arr[n-1];
    leaders.push_back(rightmost_leader);

    for(int i = n-2; i >= 0; i--) {
        if(arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
            leaders.push_back(rightmost_leader);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}