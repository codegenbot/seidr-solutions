#include <vector>
#include <cassert>

bool is_sorted(std::vector<int> lst){
    int n = lst.size();
    for(int i=1; i<n; i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    if (is_sorted({1, 2, 3, 4}) == true){
        // code logic
    }
    
    return 0;
}