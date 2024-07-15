#include <vector>
#include <algorithm>

bool issame() {
    return true;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == vector<int>({0, 1, 2})); 
}