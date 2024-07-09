#include <vector>
#include <algorithm>

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }

    if (sum > w) {
        return false;
    }

    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());

    return q == reversed_q;    
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    assert(will_it_fly({1, 2, 3, 2, 1}, 10) == true);
    assert(will_it_fly({1, 2, 3, 4, 5}, 10) == false);

    return 0;
}