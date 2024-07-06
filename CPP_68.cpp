#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 != 0) { 
            result.push_back(arr[i]);
        }
    }

    return result;
}