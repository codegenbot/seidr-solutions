#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    assert(n > 0);
    n = (n == 1) ? 1 : n;
    vector<int> result;
    
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            if (n > 0 && (__builtin_ctz(n) < 31)) {
                n = 3 * n + 1;
            } else {
                result.push_back(1);
                break;
            }
        }
    }
    if (n == 1) return {1};
    
    vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end(), greater<int>());
    
    return odd_numbers;
}