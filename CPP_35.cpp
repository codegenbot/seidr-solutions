#include <algorithm>
#include <cmath>

int main() {
    return abs(*max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 12);
}