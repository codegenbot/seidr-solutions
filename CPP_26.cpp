#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    
    return 0;
}