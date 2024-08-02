#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(), 
        [](int a, int b) {
            if (count(borrowed(a)) == count(borrowed(b))) {
                return a < b;
            }
            return count(borrowed(a)) < count(borrowed(b));
        });
    return result;
}

vector<int> borrowed(int n) {
    vector<int> res;
    while(n > 0) {
        if (n & 1)
            res.push_back(1);
        else
            res.push_back(0);
        n >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}