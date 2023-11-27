#include <vector>
#include <cassert>

bool isListSorted(std::vector<int> lst){
    int n = lst.size();
    for(int i=1; i<n; i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(isListSorted({1, 2, 3, 4}) == true);
    assert(isListSorted({4, 3, 2, 1}) == false);
    assert(isListSorted({1, 3, 2, 4}) == false);

    return 0;
}