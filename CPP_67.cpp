#include <cstdio>
#include <string>
#include <cassert>

int fruit_distribution(const std::string& s, int n) {
    int apples, oranges, mango;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    mango = n - apples - oranges;
    return mango;
}

int main() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    assert(fruit_distribution("5 apples and 10 oranges", 20) == 5);
    assert(fruit_distribution("3 apples and 5 oranges", 15) == 7);
    return 0;
}