#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    for(int i=0; i<n; i++) {
        bool is_leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                is_leader = false;
                break;
            }
        }
        
        if(is_leader) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5, 9};
    vector<int> result = leaders(arr);
    for(int x : result) cout << x << " ";
    return 0;
}