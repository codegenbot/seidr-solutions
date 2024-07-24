#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (is_sorted({1, 2, 3, 4}) == true);
}