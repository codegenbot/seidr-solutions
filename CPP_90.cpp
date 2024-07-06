```cpp
#include <vector>

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    include <algorithm>
    sort(v.begin(), v.end());
    if (v.size() < 2) return -1; 
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size()-1; j++){
            if(v[j] > v[j+1]){
                return v[j];
            }
        }
    }
    return -1;
}