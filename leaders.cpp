#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int rightMax = arr.back();
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] >= rightMax) {
            res.push_back(arr[i]);
            rightMax = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 3};
    vector<int> result = leaders(arr);
    return 0;
}