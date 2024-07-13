```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(i == n - 1 || arr[i] >= arr[i+1]) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9};
    vector<int> leadersRes = leaders(arr);
    for (int leader : leadersRes) {
        cout << leader << " ";
    }
    return 0;
}