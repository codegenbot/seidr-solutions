#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n==0)
        return leaders;
    
    leaders.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= leaders.back()) 
            leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> result = leaders(vector<int>{});
    return 0;
}