```c++
#include <vector>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    int num = n;
    while (num > 1) {
        if (num % 2 != 0)
            result.push_back(num);
        if (num == 3)
            break;
        if (num % 3 != 0)
            num = 2 * num + 1;
        else
            num /= 3;
    }
    return result;
}

int main() {
    std::vector<int> test = get_odd_collatz(6); 
    assert(test == std::vector<int>({1, 5}));
}