#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr);

bool issame(vector<int>& a, vector<int>& b);

int main() {
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}

vector<int> sort_array(vector<int> arr) {
    auto compare = [](int a, int b) {
        int countA = __builtin_popcount(a);
        int countB = __builtin_popcount(b);
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    };

    sort(arr.begin(), arr.end(), compare);

    return arr;
}

bool issame(vector<int>& a, vector<int>& b) {
    return (a == b);
}