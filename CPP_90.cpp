#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return NULL;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main() {
    assert(next_smallest(std::vector<int>{-35, 34, 12, -45}) == -35);
    return 0;
}