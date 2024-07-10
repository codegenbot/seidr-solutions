#include <iostream>
#include <vector>
#include <algorithm>

namespace CodeContest {
bool std::issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> largest_smallest_integers(std::vector<int> lst) {
    int max_negative = INT_MAX;
    int min_positive = 0;

    for(int i : lst) {
        if(i < 0 && i < max_negative) {
            max_negative = i;
        } else if(i > 0 && i > min_positive) {
            min_positive = i;
        }
    }

    return {max_negative, min_positive};
}

int main() {
    std::vector<int> lst = {5, -10, 7, -15, 3};
    auto result = largest_smallest_integers(lst);

    if(result.first < 0) {
        std::cout << "Largest smallest integer is: " << result.first << std::endl;
    } else {
        std::cout << "Smallest largest integer is: " << result.second << std::endl;
    }

    return 0;
}