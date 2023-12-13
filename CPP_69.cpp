```cpp
#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int maxFreq = -1;
    int maxValue = -1;

    for (int i = 0; i < lst.size(); i++) {
        int value = lst[i];
        int freq = 0;

        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == value) {
                freq++;
            }
        }

        if (freq >= value && value > maxValue) {
            maxValue = value;
        }
    }

    return maxValue;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }

    int result = search(lst);
    std::cout << result << std::endl;

    return 0;
}
```