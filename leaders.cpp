```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 1) {
        return arr;
    }
    
    for (int i = n - 2; i >= 0; i--) {
        while (i > 0 && arr[i] <= arr[i + 1]) {
            i--;
        }
        result.push_back(arr[i]);
    }
    
    result.push_back(arr[n - 1]);
    
    return result;
}

int main() { leaders(vector<int>({})); return 0; }