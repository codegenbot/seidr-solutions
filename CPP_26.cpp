#include <iostream>
#include <vector>
#include <set>
#include <cassert>

using namespace std;

vector<int> remove_duplicates(vector<int> numbers);

int main() {
    bool areEqual = (remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>{1, 4, 5});
    assert(areEqual);

    return 0;
}

vector<int> remove_duplicates(vector<int> numbers){
    set<int> numbersSet(numbers.begin(), numbers.end());
    vector<int> uniqueNumbers(numbersSet.begin(), numbersSet.end());
    return uniqueNumbers;
}