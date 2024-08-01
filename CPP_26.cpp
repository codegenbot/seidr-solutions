#include <vector>
#include <set>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers){
    set<int> numbersSet(numbers.begin(), numbers.end());
    vector<int> uniqueNumbers(numbersSet.begin(), numbersSet.end());
    return uniqueNumbers;
}

int main(){
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}