#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        bitset<16> binary_a(a);
        bitset<16> binary_b(b);
        if (binary_a.count() != binary_b.count()) {
            return binary_a.count() < binary_b.count();
        }
        return a < b;
    });
    return arr;
}