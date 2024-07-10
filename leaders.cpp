#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> result = leaders(arr);
    for(int i : result) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    if(n == 0) return result;

    result.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= arr[i+1]) 
            result.push_back(arr[i]);
    }
    reverse(result.begin(), result.end());
    return result;
}