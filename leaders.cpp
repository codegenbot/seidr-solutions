#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int rightmost = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 3};
    vector<int> leadersResult = leaders(arr);
    for(int i: leadersResult) cout << i << endl;
    return 0;
}