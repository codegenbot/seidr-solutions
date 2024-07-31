#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    vector<int> result = numbers;
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
} 

bool issame(const vector<int>& a, const vector<int>& b){
    vector<int> a_unique = remove_duplicates(a);
    vector<int> b_unique = remove_duplicates(b);
    return a_unique == b_unique;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    
    return 0;
}