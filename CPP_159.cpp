#include <vector>
#include <algorithm>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    return {eaten, max(0, total - remaining)};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}