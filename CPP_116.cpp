#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [](int a, int b){ 
             if (bitset<32>(a).count() != bitset<32>(b).count()) {
                 return bitset<32>(a).count() < bitset<32>(b).count();
             } else {
                 return a < b;
             }
         });
    return arr;
}