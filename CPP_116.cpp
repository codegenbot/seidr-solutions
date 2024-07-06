```c++
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), 
         [](int a, int b) {
             string strA = bitset<32>(a).to_string();
             string strB = bitset<32>(b).to_string();
             return strA.size() < strB.size() ||
                    (strA.size() == strB.size() && a < b);
         });
    return arr;
}