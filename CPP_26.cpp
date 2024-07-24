#include <vector>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}

vector<int> remove_duplicates(vector<int> numbers){
    set<int> unique_numbers(numbers.begin(), numbers.end());
    return vector<int>(unique_numbers.begin(), unique_numbers.end());
}

int main2() {
    assert((issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5})));
    return 0;
}