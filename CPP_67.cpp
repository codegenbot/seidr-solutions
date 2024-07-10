#include <string>
int fruit_distribution(std::string s, int n) {
    int apples, oranges, mango;
    sscanf(s.c_str(), "%d apples and %d oranges and %d mango", &apples, &oranges, &mango);
    mango = n - apples - oranges;
    return mango;
}