#include <cassert>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    if(lst.size() <= 1)
        return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            std::sort(lst.begin(), it);
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
}