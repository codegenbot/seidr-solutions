#include <vector>

bool will_it_fly(vector<int> q, int w);
bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && q == vector<int>(q.rbegin(), q.rend())) {
        return true;
    }
    return false;
}

int main() {
    assert (will_it_fly({5}, 5) == true);

    return 0;
}