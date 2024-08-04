#include <iostream>
#include <vector>
#include <assert.h>

std::vector<int> even_odd_count(int n) {
    return {n % 2 == 0, n % 2 != 0};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main(){
    std::vector<int> result = even_odd_count(0);
    std::cout << result[0] << " " << result[1] << std::endl;
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}