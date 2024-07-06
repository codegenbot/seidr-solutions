#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(bitset<32>(a).to_string().begin(), bitset<32>(a).to_string().end(), '1') <
            count(bitset<32>(b).to_string().begin(), bitset<32>(b).to_string().end(), '1')) {
            return true;
        } else if (count(bitset<32>(a).to_string().begin(), bitset<32>(a).to_string().end(), '1') ==
                   count(bitset<32>(b).to_string().begin(), bitset<32>(b).to_string().end(), '1')) {
            return a < b;
        }
        return false;
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}