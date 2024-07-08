#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct Pair {
    int onesCount;
    int value;

    bool operator<(const Pair& other) const {
        return onesCount != other.onesCount ? onesCount < other.onesCount : value < other.value;
    }
};

vector<int> sort_array(vector<int> arr) {
    vector<Pair> result;
    
    for (int i = 0; i < arr.size(); i++) {
        int onesCount = __builtin_popcount(arr[i]);
        result.push_back({onesCount, arr[i]});
    }
    
    sort(result.begin(), result.end());
    
    vector<int> sortedArray;
    
    for (auto &x : result) {
        sortedArray.push_back(x.value);
    }
    
    return sortedArray;
}