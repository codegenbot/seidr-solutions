#include <vector>
#include <initializer_list>

bool below_threshold(std::initializer_list<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;  
        }
    }
    return true;
}