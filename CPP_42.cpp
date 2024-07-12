#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](int x) { return std::find(b.begin(), b.end(), x) != b.end(); });
}

vector<int> incr_list(initializer_list<int> l){
    vector<int> result = vector<int>(l);
    for(int i = 0; i < result.size(); ++i) {
        result[i] = l[i]+1;
    }
    return result;
}

int main() {
    assert(same(vector<int>(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123})) , {6, 3, 6,3, 4, 4, 10, 1, 124}));
    return 0;
}