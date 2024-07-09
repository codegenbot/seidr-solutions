```cpp
#include <iostream>
#include <vector>

int add(std::vector<int> lst) {
    int result = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0)
            result += lst[i];
    }
    return result;

}

int main() {
    assert(add({4, 4, 6, 8}) == 12);
    std::cout << "Test passed" << std::endl;
    return 0;
}