```cpp
#include <algorithm>
#include <vector>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) return sorted[i];
    }
    return -1;
}

int main() {
    int test[] = {5,2,8,20,15};
    std::vector<int> lst(test, test+sizeof(test)/sizeof(test[0]));
    std::cout << "Next smallest: " << next_smallest(lst) << std::endl;
}