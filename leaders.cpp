#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    
    if(n == 0)
        return leaders;
        
    leaders.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            leaders.push_back(arr[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
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