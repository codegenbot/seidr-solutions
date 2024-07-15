#include <string>

int fruit_distribution(const char* s, int n) {
    int apples, oranges, mango;
    sscanf(s, "%d apples and %d oranges", &apples, &oranges);
    mango = n - apples - oranges;
    return mango;
}