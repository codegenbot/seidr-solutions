#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    int max_neg = 0, min_pos = 0;

    for (int num : lst) {
        if (num < 0) {
            max_neg = max(max_neg, num);
        } else if (num > 0) {
            min_pos = min(min_pos, num);
        }
    }

    result.push_back(max_neg);
    result.push_back(min_pos);

    return result;
}