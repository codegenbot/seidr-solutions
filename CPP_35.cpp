```c++
#include <algorithm>
#include <cmath>

int main() {
    int vector_name[] = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return std::abs(*std::max_element(vector_name, vector_name + sizeof(vector_name)/sizeof(vector_name[0])));
}