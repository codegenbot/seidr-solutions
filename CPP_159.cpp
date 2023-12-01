#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(total);
    result.push_back(left);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}