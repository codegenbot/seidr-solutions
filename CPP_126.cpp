#include <iostream>
#include <vector>

int is_sorted(std::vector<int> lst){
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    std::vector<int> test_vector({1, 2, 3, 4});
    assert (is_sorted(test_vector) == 1);
    return 0;
}