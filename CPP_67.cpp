// Include necessary header files
#include <cstdio>
#include <string>

int fruit_distribution(const std::string& s, int n) {
    int apples = 0, oranges = 0;
    sscanf(s.c_str(), "%d apples %*s %d oranges", &apples, &oranges);
    return n - apples - oranges;
}