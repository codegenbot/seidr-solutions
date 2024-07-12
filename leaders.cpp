#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        
        if(leader) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders;
    
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        
        if(leader) {
            leaders.push_back(arr[i]);
        }
    }
    
    cout << "The leaders in the vector are: ";
    for(int i : leaders) {
        cout << i << " ";
    }
    
    return 0;
}