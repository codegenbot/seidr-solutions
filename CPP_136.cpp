#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largest_neg = INT_MIN;
    int smallest_pos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > largest_neg) {
            largest_neg = num;
        }
        if (num > 0 && num < smallest_pos) {
            smallest_pos = num;
        }
    }

    result[0] = largest_neg == INT_MIN ? 0 : largest_neg;
    result[1] = smallest_pos == INT_MAX ? 0 : smallest_pos;

    return result;
}