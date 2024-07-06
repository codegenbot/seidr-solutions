```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.size() % 2 == 1)
        return array;
    else
        std::sort(array.rbegin(), array.rend());
    
    // Add this message to handle the error!
    cout << "Error: Vector not found" << endl;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
}