```cpp
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int maxElement(vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}