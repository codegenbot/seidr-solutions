#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    return *max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124;
}