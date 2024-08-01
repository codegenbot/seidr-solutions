#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i * 2);
    }
    return pile;
}

// Add the missing function
int count_divisible_piles(std::vector<int> pile) {
    int count = 0;
    for (int val : pile) {
        if (val % 3 == 0) {
            count++;
        }
    }
    return count;
}