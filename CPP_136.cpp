#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(const vector<int>& lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    return {largest_negative == INT_MIN ? 0 : largest_negative, smallest_positive == INT_MAX ? 0 : smallest_positive};
}