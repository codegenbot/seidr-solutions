#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int max_negative = 0;
    int min_positive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > max_negative) {
            max_negative = num;
        } else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }

    return {(max_negative == 0), (min_positive == INT_MAX)};
}