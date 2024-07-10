#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), 
         [](int a, int b) {
             if (bitset<64>(a).count() == bitset<64>(b).count()) {
                 return a < b;
             }
             else {
                 return bitset<64>(a).count() < bitset<64>(b).count();
             }
         });
    return result;
}