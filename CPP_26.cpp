#include <vector>
#include <algorithm>

using namespace std;

bool myIssame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result(numbers.begin(), numbers.end());
    sort(result.begin(), result.end());
    auto it = unique(result.begin(), result.end());
    it = erase(it, result.end()); 
    return vector<int>(result.begin(), it);
}

int main() {
    assert(myIssame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}