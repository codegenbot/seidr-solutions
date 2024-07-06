#include<bits/stdc++.h>
using namespace std;

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(),
         [](int a, int b) {
             return bitset<32>(a).count() < bitset<32>(b).count() ||
                    (bitset<32>(a).count() == bitset<32>(b).count() && a < b);
         });
    return arr;
}