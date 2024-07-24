#include <iostream>
#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && std::count_if(std::begin(lst), std::end(lst), [&](int x) { return x == i; }) >= 1) { 
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

assert(search({3, 10, 10, 9, 2}) == -1);