#include <algorithm>
#include <vector>

bool is_sorted(std::vector<int> lst);

int main() {
    // Your test cases here...
    assert(is_sorted({1, 2, 3, 4}) == true);
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it = std::unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}