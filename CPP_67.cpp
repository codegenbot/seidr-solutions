#include <iostream>
#include <cassert>

int fruit_distribution(std::string s, int n) {
    int apples = 0, oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    return n - apples - oranges;
}

int main() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}