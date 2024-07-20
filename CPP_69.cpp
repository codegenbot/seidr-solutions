#include <iostream>
#include <vector>
#include <map>

int count(int n) {
    int c = 0;
    for (int i : {1, 2, 3, 4, 5}) {
        if (i <= n) {
            c++;
        }
    }
    return c;
}

int search(std::vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i)) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    std::vector<int> lst = {3, 10, 10, 9, 2};
    int result = search(lst);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}