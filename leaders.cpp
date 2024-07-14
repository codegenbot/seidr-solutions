#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if(n == 0) return leaders;
    int rightmost_leader = arr.back();
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmost_leader) {
            leaders.push_back(arr[i]);
            rightmost_leader = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {17, 11, 13, 2, 23, 19};
    vector<int> leaders = leaders(arr);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}