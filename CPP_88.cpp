#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array) {
    if(array.empty())
        return array;
    if((array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), greater<int>());
    else
        sort(array.begin(), array.end());

    return array;
}

int main() {
    vector<int> input_array = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    vector<int> sorted_array = sort_array(input_array);

    for (int num : sorted_array) {
        cout << num << " ";
    }

    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));

    return 0;
}