#include <algorithm>
#include <cassert>
#include <climits>
#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr){
    auto it = min_element(arr.begin(), arr.end(), [](int a, int b){
        return a % 2 == 0 && b % 2 != 0;
    });
    
    vector<int> result;
    
    if (it != arr.end()) {
        result.push_back(*it);
        result.push_back(distance(arr.begin(), it));
    }
    
    return result;
}