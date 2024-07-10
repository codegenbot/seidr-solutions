#include <vector>
#include <iostream>

int sumVector(std::vector<int> lst) {
    int total = 0;
    for (int i : lst) {
        total += i;
    }
    return total;
}

int main() {
    assert(sumVector({127, 97, 8192}) == 1316);
    std::cout << "sumVector({127, 97, 8192}) = " << sumVector({127, 97, 8192}) << std::endl;
    return 0;
}