#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    vector<int> v = l;
    sort(v.begin(), v.end());
    
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] + v[j] == 0)
            return true;
        else if (v[i] + v[j] < 0)
            i++;
        else
            j--;
    }
    
    return false;
}