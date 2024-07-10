#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = arr[n-1];
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= max_right){
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> result = leaders(arr);
    // do something with result
    return 0;
}