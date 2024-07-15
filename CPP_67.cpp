#include <cassert>
#include <cstdio>
#include <string>

int fruit_distribution(std::string s, int n) {
    int apples, oranges, mangoes;
    sscanf(s.c_str(), "1 apples and %d oranges", &apples, &oranges);
    mangoes = n - apples - oranges;
    return mangoes;
}

int main() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}