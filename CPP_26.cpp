#include <vector>
#include <set>

using namespace std; 

std::vector<int> remove_duplicates(std::vector<int> numbers){
    set<int> unique_numbers(numbers.begin(), numbers.end());
    return vector<int>(unique_numbers.begin(), unique_numbers.end());
}

bool is_same(const vector<int>& a, const vector<int>& b) { 
    return (a == b);
}

int main() {
    assert((is_same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5})));
    return 0;
}