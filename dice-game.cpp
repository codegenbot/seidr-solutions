#include <cmath>
#include <iostream>

using namespace std;

double probability(int n, int m) {
    return round((m * 1.0) / (n + 1)) * 100;
}