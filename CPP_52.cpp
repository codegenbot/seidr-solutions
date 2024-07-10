```
#include <iostream>
#include <vector>

using namespace std;

bool below_threshold(vector<int> numbers, int threshold) {
    for (int number : numbers) {
        if (number < threshold) {
            return true;
        }
    }
    return false;
}