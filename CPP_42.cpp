#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> incr_list(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (auto& num : result) {
        num++;
    }
    return result;
}