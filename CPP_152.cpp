#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(issame(compare({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));

    return 0;
}