#include <iostream>
#include <vector>

using namespace std;

int main() {
    leaders(vector<int>{{1,2,3,4,5}});
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int curLeader = arr[n-1];
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= curLeader) {
            curLeader = arr[i];
            leaders.push_back(curLeader);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}