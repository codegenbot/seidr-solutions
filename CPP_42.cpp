#include <iostream>
#include <vector>

// Complete the function to increment all elements of the vector by 1
std::vector<int> incr_list(std::vector<int> l) {
    for (auto& i : l) {
        i++;
    }
    return l;
}
```