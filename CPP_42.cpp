#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l; 
    for (int i = 0; i < result.size(); ++i) {
        result[i]++;
    }
    return result;
}

int main() {
    assert(issame(incr_list(vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}), incr_list(vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}