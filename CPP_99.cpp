#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    float num = std::stof(value);
    int lower = std::floor(num);
    int higher = std::ceil(num);
    return std::abs(num - lower) < std::abs(num - higher) ? lower : higher;
}

using namespace std;

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases as needed
    return 0;
}