#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return 0;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    std::vector<int> numbers = {5, 3, 1, 4, 2};
    int result = next_smallest(numbers);
    return 0;
}