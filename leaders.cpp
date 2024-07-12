#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 7, 8, 5};
    vector<int> leaders = leaders(arr);
    // do something with leaders vector...
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) result.push_back(arr[i]);
    }
    return result;
}