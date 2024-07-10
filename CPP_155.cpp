#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    while(num != 0) {
        if(num % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    return {even, odd};
}

assert(issame(even_odd_count(0) , {1, 0}));
assert(issame(even_odd_count(123456), {3, 3}));
assert(issame(even_odd_count(-87654), {2, 3}));