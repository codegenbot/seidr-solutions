#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(const vector<int>& a) {
    vector<int> result = a;
    for (int i = 0; i < result.size(); i++) {
        result[i]++;
    }
    return result;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
}