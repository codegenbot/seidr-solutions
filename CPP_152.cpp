#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a < b)
        return make_pair(0, 1);
    else if (a > b)
        return make_pair(1, 0);
    else
        return make_pair(1, 1);

}

int main() {
    assert(make_pair(0, 1) == compare({1,2,3,5},{-1,2,3,4})); 
    return 0;
}