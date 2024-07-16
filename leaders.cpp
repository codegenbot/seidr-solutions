#include <vector>
using namespace std;

vector<int> leaders(vector<int> arr) {
    vector<int> result;
    int maxR = arr.back();
    for(int i = arr.size()-1; i>=0; i--) {
        if(arr[i] >= maxR) {
            result.push_back(arr[i]);
            maxR = arr[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}