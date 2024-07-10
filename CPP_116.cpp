#include <vector>
#include <algorithm>

using namespace std;

bool mycompare(int a, int b) {
    int ones_a = __builtin_popcount(a);
    int ones_b = __builtin_popcount(b);
    if (ones_a == ones_b)
        return a < b;
    else
        return ones_a < ones_b;
}

int main() {
    vector<int> v = {2,4,8,16,32};
    sort(v.begin(), v.end(), mycompare);
    for(int i : v) cout << i << " ";
    return 0;
}