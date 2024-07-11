#include <vector>
#include <algorithm>
#include <cassert>
#include <initializer_list>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a.size() < b.size())
        return make_pair(1, 0);
    else if (a.size() > b.size())
        return make_pair(0, 1);
    else
        return make_pair(1, 1);

}

int main() {
    assert (compare({1,2,3,5},{-1,2,3,4}) == make_pair(0,1));
    return 0;
}