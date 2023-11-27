#include <vector>

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
    return 0;
}