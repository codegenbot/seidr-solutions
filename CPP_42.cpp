#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> incr_list(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        result.push_back(num + 1);
    }
    return result;
}