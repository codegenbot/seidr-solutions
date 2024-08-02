#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true, decreasing = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    std::vector<float> input = {1.5f, 2.3f, 2.5f, 3.1f, 5.6f};
    bool result = monotonic(input);
    return 0;
}