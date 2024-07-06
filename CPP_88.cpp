#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0) {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end(), greater<int>());
        return sortedArray;
    } else {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end());
        return sortedArray;
    }
}

assert(sort_array({21, 14, 23, 11}) == vector<int>({23, 21, 14, 11}));