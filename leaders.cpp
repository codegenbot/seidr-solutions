#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersRes = leaders(arr);
    
    for (int i: leadersRes) {
        cout << i << " ";
    }
    
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int max_right = arr[n-1];
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    
    return res;
}