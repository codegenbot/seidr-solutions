#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(unsigned int n) {
    assert(n > 0);
    
    vector<int> result;
    while (n != 1 && n != 1431655765) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            if (n > (INT_MAX - 1) / 3) {
                break;
            }
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}