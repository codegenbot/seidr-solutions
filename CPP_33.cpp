#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

void sort_third(std::vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        std::sort(v.begin() + i, v.begin() + i + 3);
    }
}

std::vector<int> fix_code(std::vector<int> l)
{
    std::vector<int> res = l;
    sort_third(res);
    return res;
}