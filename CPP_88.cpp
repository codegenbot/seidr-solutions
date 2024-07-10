#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), greater<int>());
    else
        sort(array.begin(), array.end());
    return array;
}

int main() {
    vector<int> sorted = sort_array({21, 14, 23, 11});
    assert(sorted == vector<int>({23, 21, 14, 11}));
    return 0;
}