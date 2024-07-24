#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst){
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> test_vector({1, 2, 3, 4});
    assert (is_sorted(test_vector) == true);
    return 0;
}