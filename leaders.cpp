#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    for(int i=n-1; i>=0; --i){
        bool leader = true;
        for(int j=i+1; j<n; ++j){
            if(arr[j] >= arr[i]){
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 23, 15};
    vector<int> result = leaders(arr);
    return 0;
}