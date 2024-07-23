#include <cassert>
#include <vector>

bool std::vector issame(std::vector a, std::vector b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector get_even_odd(int num) {
    std::vector result({0, 0});
    int temp = abs(num);
    while(temp != 0){
        int digit = temp % 10;
        if(digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return result;
}

int main() {
    assert(issame(get_even_odd(0), {0, 1})); 
    return 0;