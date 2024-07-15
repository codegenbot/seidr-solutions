#include <iostream>
#include <string>
#include <cassert>

int fruit_distribution(std::string str, int n) {
    int apples, oranges;
    sscanf(str.c_str(), "%d apples and %d oranges", &apples, &oranges);
    int mangoes = n - apples - oranges;
    return mangoes;
}

int main() {
    assert (fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}