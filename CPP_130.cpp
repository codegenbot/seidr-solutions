#include <vector>
#include <cassert>

using namespace std;

vector<int> tri(int n) {
    vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    int a = 0, b = 0, c = 3;
    for (int i = 1; i <= n; ++i) {
        result.push_back(c);
        if (i % 2 == 0) {
            c = 1 + i / 2;
        } else {
            int temp = c;
            c = a + b + c;
            a = b;
            b = temp;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(tri(1), {1, 3}));
    return 0;
}