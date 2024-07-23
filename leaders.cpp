#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int rightmostLeaderIndex = n - 1;
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[rightmostLeaderIndex]) {
            rightmostLeaderIndex = i;
        }
    }
    
    leaders.push_back(arr[rightmostLeaderIndex]);
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersArr = leaders(arr);
    for(int i: leadersArr) {
        cout << i << " ";
    }
    return 0;
}