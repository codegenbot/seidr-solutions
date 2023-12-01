#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> sort_array(vector<int> array);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> sort_array(vector<int> array){
    if(array.size() == 0){
        return array;
    }
    if((array[0] + array[array.size()-1]) % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }
    else{
        sort(array.begin(), array.end());
    }
    return array;
}