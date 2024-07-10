#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), 
         [&] (int a, int b) {
             if (bit_set(a) == bit_set(b)) return a < b;
             return bit_set(a) < bit_set(b);
         });
    return arr;
}

int bit_set(int n) {
    int count = 0;
    while (n > 0) {
        n &= n - 1;
        count++;
    }
    return count;
}