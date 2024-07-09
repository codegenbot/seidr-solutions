#include <vector>

bool monotonic(std::vector<float> l) {
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
    std::vector<float> l = {9.0f, 9.0f, 9.0f, 9.0f};
    assert(monotonic(l) == true);
}