#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst); // Forward declaration

bool issame(vector<int> a, vector<int> b); // Fix function signature spacing

vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}