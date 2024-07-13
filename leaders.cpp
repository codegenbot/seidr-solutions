#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int last = arr.back();
    
    for (int i = arr.size() - 2; i >= 0; --i) {
        if (arr[i] >= last) {
            result.push_back(arr[i]);
            last = arr[i];
        }
    }
    
    result.push_back(last);
    return result;
}