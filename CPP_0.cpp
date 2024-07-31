#include <vector> 

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(!has_close_elements(a, 0.5f));
    return 0;
}