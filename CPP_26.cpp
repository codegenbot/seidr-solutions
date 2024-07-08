#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers);

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> result = numbers;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}