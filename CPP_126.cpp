#include <iostream>
#include <vector>
#include <cassert>

bool is_sorted(std::vector<int> lst){
    if (lst.size() <= 1) return true;
    for(int i = 0; i < lst.size()-1; i++){
        if(lst[i] >= lst[i+1]) return false;
    }
    int count = 1;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] == lst[i-1]){
            count++;
            if(count > 2) return false;
        } else {
            count = 1;
        }
    }
    return true;

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}