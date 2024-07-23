#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    leaders.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(i < n-2 && arr[i] >= max(arr.begin()+i+1, arr.end())) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {3, 4, 1, 5, 9};
    vector<int> result = leaders(arr);
    for(int x : result) cout << x << " ";
    return 0;
}