#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> vec;
    
    for (int i : arr) {
        vec.push_back({bitset<32>(i).count(), i});
    }
    
    sort(vec.begin(), vec.end());
    
    return vector<int>(vec.begin(), vec.end());
}