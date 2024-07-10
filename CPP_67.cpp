#include <string>
int fruit_distribution(std::string s, int n) {
    int apples, oranges, mango;
    sscanf(s.c_str(), " %d apples and %d %*s", &apples, &oranges);
    mango = n - apples - oranges;
    return mango;
}