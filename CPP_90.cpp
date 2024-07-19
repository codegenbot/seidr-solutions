#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}

int main() {
    std::vector<int> lst;
    int num;
    while (std::cin >> num) {
        lst.push_back(num);
    }
    assert(next_smallest(lst) == 3); // adjust this line as per your problem
    return 0;
}