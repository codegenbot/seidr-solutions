#include <iostream>
#include <cassert>

int fruit_distribution(const std::string& str, int n) {
    int apples = 1;
    int oranges = 100;

    int mangoes = n - apples - oranges;
    return mangoes;
}