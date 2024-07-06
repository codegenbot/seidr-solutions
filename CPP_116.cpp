#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    return vector<int>(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), [](int a, int b){
        if (bitset<32>(a).count() != bitset<32>(b).count())
            return bitset<32>(a).count() < bitset<32>(b).count();
        else
            return a < b;
    });
}