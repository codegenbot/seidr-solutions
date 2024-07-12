#include <iostream>
#include <limits>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = *std::max_element(lst.begin(), lst.end());
    int smallest_positive = *std::min_element(lst.begin(), lst.end());

    return std::vector<int>{largest_negative, smallest_positive};
}