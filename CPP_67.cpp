#include <cassert>
#include <string>

int fruit_distribution(const std::string& s, int n) {
    int apples, oranges, mango;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    mango = n - apples - oranges;
    return mango;
}

int testing() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}