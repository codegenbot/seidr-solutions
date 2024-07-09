```
#include <vector>
#include <cassert>

bool monotonic(const std::vector<float>& l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    assert(monotonic({9.0, 9.0, 9.0, 9.0}) == true);
    std::vector<float> v = {1.5, 2.3, 4.7, 6.8};
    for (float f : v) {
        std::cin >> f;
    }
    if (!monotonic(v)) {
        std::cout << "The sequence is not monotonic." << std::endl;
    } else {
        std::cout << "The sequence is monotonic." << std::endl;
    }
}