#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [](int a, int b){
             if (bitset<64>(a).count() == bitset<64>(b).count()) {
                 return a < b;
             } else {
                 return bitset<64>(a).count() < bitset<64>(b).count();
             }
         });
    return arr;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {1, 2, 4, 8, 16})); 
    return 0;
}