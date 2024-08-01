#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int rightmost_leader = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmost_leader) {
            rightmost_leader = arr[i];
            leaders.push_back(rightmost_leader);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 23, 35, 26, 25, 1, 3};
    vector<int> leaders_result = leaders(arr);
    for (int leader : leaders_result) {
        cout << leader << " ";
    }
    return 0;
}