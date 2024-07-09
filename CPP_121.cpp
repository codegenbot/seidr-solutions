```cpp
#include <initializer_list>
#include <cassert>

int main(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(main({3, 13, 2, 9}) == 16);
}