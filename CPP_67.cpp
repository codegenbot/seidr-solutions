#include <string>
#include <cstdio>

int fruit_distribution(std::string s, int n){
    int apples = 0, oranges = 0;
    sscanf(s.c_str(), "%d apples and %d oranges\n", &apples, &oranges);
    return n - apples - oranges;
}