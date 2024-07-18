#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> tri(int n){
    vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(tri(1), {3, 1}));
    return 0;
}