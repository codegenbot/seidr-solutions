#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> generate_integers(int start, int end) {
    vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}