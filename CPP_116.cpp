#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), [](int a, int b) {
        return bitset<32>(a).count() == bitset<32>(b).count() ? a < b : bitset<32>(a).count() < bitset<32>(b).count();
    });
    return result;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert (sort_array({2,4,8,16,32}) == vector<int>({2, 4, 8, 16, 32}));
    return 0;
}