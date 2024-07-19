```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; // or any other value that represents "None"
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or any other value that represents "None"
}

int main() {
    vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.size()>0) {
        std::cout << next_smallest(lst) << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }
    return 0;
}