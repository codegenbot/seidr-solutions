```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() { 
    vector<int> v = {1, 2, 3}; 
    cout << "Leaders: "; 
    for(int x : leaders(v)) { 
        cout << x << " "; 
    } 
    cout << endl; 
    return 0; 
}