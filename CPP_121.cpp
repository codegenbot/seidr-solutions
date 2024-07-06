#include <vector>
#include <initializer_list>
#include <assert.h>
#include <iostream>

int solutions(std::vector<int> lst) {
    if (lst.size() == 0) {
        return -1;
    }
    
    int result = 0;
    for (int i : lst) {
        if ((i & (i << 1)) != i)
            result++;
    }

    return result;
}

int main() {
    std::vector<int> lst = {3, 13, 2, 9};
    int result = solutions(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}