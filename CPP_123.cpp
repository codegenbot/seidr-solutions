#include <vector>
#include <algorithm>

bool issame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}

vector<int> solve(int n) {
    vector<int> result;
    while(n != 1){
        if(n % 2 == 1)
            result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}