#include <vector>
#include <algorithm>

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), 
         [](int a, int b) { 
             if (bitset<32>(a).count() != bitset<32>(b).count()) {
                 return bitset<32>(a).count() < bitset<32>(b).count();
             } else {
                 return a < b;
             }
         });
    return result;
}