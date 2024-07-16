#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    
    if(n == 0)
        return leaders;
        
    int maxRight = arr[n-1];
    leaders.push_back(maxRight);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> input = {1, 2, 8, 5};
    vector<int> result = leaders(input);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}