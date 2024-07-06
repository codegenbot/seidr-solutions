```cpp
#include <vector>
#include <assert.h>

int solutions(std::vector<int> lst) {
    if (lst.size() == 0) {
        return -1;
    }
}

int main() {
    std::vector<int> lst = {3, 13, 2, 9};
    int result = solutions(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}