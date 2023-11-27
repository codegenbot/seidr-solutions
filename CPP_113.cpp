#include <cassert>
#include <vector>

vector<int> odd_count(vector<int> lst) {
    vector<int> result;
    for (int num : lst) {
        int count = 0;
        while (num != 0) {
            int digit = num % 10;
            if (digit % 2 != 0) {
                count++;
            }
            num /= 10;
        }
        result.push_back(count);
    }
    return result;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(odd_count({271, 137, 314}), {2, 3, 2}));
    assert(is_same(odd_count({13579, 24680, 97531}), {5, 0, 5}));
    return 0;
}