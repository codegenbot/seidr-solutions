#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(),
         [](int a, int b) {
             int oneCountA = __builtin_popcount(a);
             int oneCountB = __builtin_popcount(b);

             if (oneCountA == oneCountB)
                 return a < b;
             else
                 return oneCountA < oneCountB;
         }
    );

    return arr;
}