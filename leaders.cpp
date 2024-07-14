#include <vector>
#include <initializer_list>

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
    vector<int> arr = {17, 28, 4, 27, 29, 31, 26, 25, 30};
    vector<int> res = leaders(arr);
    for(int i: res) cout << i << " ";
    return 0;
}