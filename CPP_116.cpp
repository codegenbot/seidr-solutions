#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(),
        [](int a, int b) {
            string str_a = bitset<32>(a).to_string();
            string str_b = bitset<32>(b).to_string();

            return str_a < str_b;
        });
    return arr;
}