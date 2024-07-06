```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; i++) {
        if (!issame(lst[i], lst[i + 1])) {
            int temp = lst[i];
            lst[i] = lst[i + 1];
            lst[i + 1] = temp;
            i--;
        }
    }
    return lst;
}

int main() {
    std::vector<int> lst;
    int num;

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if (num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for (int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}