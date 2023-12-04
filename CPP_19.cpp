#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sort_num_vec(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
}

int main() {
    vector<int> numbers{6, 5, 4, 3, 2, 1, 0};
    assert(sort_num_vec(numbers) == "zero one two three four five six");
    return 0;
}