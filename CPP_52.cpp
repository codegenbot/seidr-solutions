#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

bool below_threshold(vector<int> scores, int threshold) {
    for (int score : scores) {
        if (score > threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
}