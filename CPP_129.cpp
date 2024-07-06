#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 3}, minPath({{1, 3}, {3, 2}}, 10)) );
    return 0;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    // your implementation here
}