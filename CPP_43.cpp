#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    assert (pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    assert (pairs_sum_to_zero({-3, 9, -1, 4, 2, -2}) == true);
    assert (pairs_sum_to_zero({1, 2, 3, 4, 5}) == false);
    assert (pairs_sum_to_zero({-1, -2, -3, -4, -5}) == false);
    assert (pairs_sum_to_zero({0, 0, 0, 0, 0}) == true);

    cout << "All test cases passed!" << endl;
    
    return 0;
}