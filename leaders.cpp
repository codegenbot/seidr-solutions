#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j <= n - 1; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    return 0;
}