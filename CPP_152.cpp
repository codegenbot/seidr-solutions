```c
#include <algorithm>
#include <vector>

std::vector<int> compare(int a[], int n1, int b[], int n2) {
    if (n1 != sizeof(a) / sizeof(a[0]) || n2 != sizeof(b) / sizeof(b[0])) {
        return {0};
    }
    std::sort(std::vector<int>(a, a + n1), std::greater<int>());
    std::sort(std::vector<int>(b, b + n2), std::greater<int>());

    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (a[i] > b[j]) {
            return {0};
        } else if (a[i] < b[j]) {
            return {1};
        }
        i++;
        j++;
    }

    return {0};