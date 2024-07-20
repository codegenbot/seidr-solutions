#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for(int i=n-1; i>=0; i--) {
        if(i == n-1 || arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> result = leaders(arr);
    for(int i: result) {
        cout << i << " ";
    }
    return 0;
}