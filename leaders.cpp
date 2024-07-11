#include <vector>
#include <initializer_list>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(arr[i]);
    }
    
    return res;
}