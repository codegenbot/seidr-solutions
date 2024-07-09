```cpp
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
}

std::vector<int> get_odd_collatz(int start) {
    std::vector<int> result;
    int num = start;
    while(num != 1) {
        if(num % 2 != 0) {
            result.push_back(num);
        }
        num = num / 2;
    }
    return result;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
}