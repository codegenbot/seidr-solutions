```cpp
#include <vector>
#include <iostream>

int main(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 2 == 0 && lst[i] % 2 != 0)) {
            sum += lst[i];
        }
    }
    std::cout << sum << std::endl;
    return 0;
}