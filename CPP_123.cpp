#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    sort(result.begin(), result.end());
    
    vector<int> odd_numbers;
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] % 2 != 0) {
            odd_numbers.push_back(result[i]);
        }
    }
    
    return odd_numbers;
}