#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int search(std::vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && std::count(lst.begin(), lst.end(), i) >= 1) { 
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}