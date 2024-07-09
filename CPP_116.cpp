#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [&] (int a, int b) { 
             bitset<32> bit_a(a);
             bitset<32> bit_b(b);
             if (bit_a.count() != bit_b.count()) 
                 return bit_a.count() < bit_b.count();
             else
                 return a < b;
         });
    return arr;
}