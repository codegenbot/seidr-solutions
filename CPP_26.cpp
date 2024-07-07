#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool myIssame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result(numbers.begin(), numbers.end());
    sort(result.begin(), result.end());
    auto it = unique(result.begin(), result.end());
    result.erase(it, result.end()); 
    return vector<int>(result.begin(), it);
}