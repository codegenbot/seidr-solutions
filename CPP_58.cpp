#include <vector>
#include <algorithm>
#include <numeric>

bool issame(const vector<int>& a, const vector<int>& b)
{
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.empty();
}

vector<int> common(const vector<int>& l1, const vector<int>& l2)
{
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main()
{
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}