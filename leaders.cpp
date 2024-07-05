#include <vector>
using namespace std;

int main() {
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        int maxRight = arr[n-1];
        for(int i=n-1; i>=0; i--) {
            if(arr[i] >= maxRight) {
                res.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        return res;
    }

    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for(int i: result) {
        cout << i << " ";
    }
}