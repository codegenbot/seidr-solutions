```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}