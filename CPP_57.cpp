#include <vector>

bool monotonic(std::vector<int> l);

bool monotonic(std::vector<int> l) {
    int n = l.size();
    bool increasing = true, decreasing = true;
    for (int i = 1; i < n; ++i) {
        if (l[i] < l[i - 1]) increasing = false;
        if (l[i] > l[i - 1]) decreasing = false;
    }
    return increasing || decreasing;
}

int main() {
    std::vector<int> l = {1, 2, 3, 4, 5};
    std::cout << std::boolalpha << monotonic(l) << std::endl;
    return 0;
}