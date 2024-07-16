#include <vector>
#include <initializer_list> // include this line
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    int maxRightSoFar = arr[n-1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return res;
}