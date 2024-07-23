#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int max = 0;
    for (auto i : lst) {
        if (i > 0 && std::count(lst.begin(), lst.end(), i) == i) {
            return i;
        }
        if (std::count(lst.begin(), lst.end(), i) > max) {
            max = std::count(lst.begin(), lst.end(), i);
        }
    }
    return -1;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}