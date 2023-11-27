#include <vector>
#include <iostream>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    std::vector<int> lst = {5, 3, 1, 2, 4};
    int result = next_smallest(lst);
    std::cout << "Next smallest number: " << result << std::endl;
    return 0;
}