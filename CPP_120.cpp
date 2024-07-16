#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    
    if(k >= arr.size()){
        sort(arr.begin(), arr.end());
        return vector<int>(arr.begin(), arr.begin()+k);
    }
    
    for(int i = 0; i < k; i++){
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }

    return result;
}