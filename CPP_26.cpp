#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        if (count(numbers.begin(), numbers.end(), numbers[i]) == 1) {
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == vector<int>{1, 4, 5});
    return 0;
}