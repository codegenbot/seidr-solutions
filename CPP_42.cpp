#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> incr_list(std::vector<int> input) {
    for (int& num : input) {
        num++;
    }
    return input;
}