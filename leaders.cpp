#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    return result;
}