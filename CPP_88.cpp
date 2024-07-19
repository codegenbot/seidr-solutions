#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>
#include <iostream>

using namespace std;

// bool issame(const vector<int>& a, const vector<int>& b){
//     return a == b;
// }

vector<int> sort_array(const vector<int>& array){
    vector<int> sortedArray = array;
    if(sortedArray.empty()) return sortedArray;
    if((sortedArray.front() + sortedArray.back()) % 2 == 0)
        sort(sortedArray.begin(), sortedArray.end(), greater<int>());
    else
        sort(sortedArray.begin(), sortedArray.end());
    return sortedArray;
}