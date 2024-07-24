#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> get_odd_collatz(int n){
    vector<int> result;
    while(n != 1){
        if(n % 2 != 0){
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}