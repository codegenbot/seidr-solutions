#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if (n == 0) return leaders; // handle edge case
    
    int rightmostLeader = arr[n-1];
    leaders.push_back(rightmostLeader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmostLeader) {
            rightmostLeader = arr[i];
            leaders.push_back(rightmostLeader);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {5, 2, 3, 4}; 
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << endl; 
    }
    return 0;
}