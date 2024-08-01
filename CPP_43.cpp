#include <vector>
#include <algorithm>

using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    for (int i = 0; i < l.size() - 1; i++) {
        int j = l.size() - 1;
        while (i < j) {
            int sum = l[i] + l[j];
            if (sum == 0)
                return true;
            else if (sum < 0)
                j--;
            else
                i++;
        }
    }
    return false;
}