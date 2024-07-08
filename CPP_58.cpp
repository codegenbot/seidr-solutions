#include <algorithm>
#include <vector>
#include <set>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> common(const vector<int>& l1, const vector<int>& l2){
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main()
{
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}