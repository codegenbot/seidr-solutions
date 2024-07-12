#include <vector>

bool issame(vector<int> a, vector<int> b) {
    int n = a.size();
    if(b.size() != n) {
        return false;
    }
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return std::vector<int>{largest_negative, smallest_positive};
}