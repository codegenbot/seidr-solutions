```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool has_close_elements(vector<double> elements, double threshold) {
    for(int i = 0; i < elements.size() - 1; i++) {
        if(abs(elements[i] - elements[i+1]) <= threshold) {
            return true;
        }
    }
    return false;
}