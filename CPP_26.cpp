#include <vector>
#include <algorithm>
#include <cassert>  // Include cassert for assert

using namespace std;

vector<int> remove_duplicates(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {  // Change function signature to int main()
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>{1, 4, 5});  // Update assert with a single argument
    return 0;
}