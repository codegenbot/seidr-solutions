#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> unique_numbers = numbers;
    sort(unique_numbers.begin(), unique_numbers.end());
    unique_numbers.erase(unique(unique_numbers.begin(), unique_numbers.end()), unique_numbers.end());
    return unique_numbers;
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