#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst){
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i-1] >= lst[i]) return false;
    }
    std::vector<int> counts(101,0);
    for(int x : lst) counts[x]++;
    for(int i = 1; i <= 100; i++){
        if(counts[i] > 1) return false;
    }
    return true;

int main() {
    assert (is_sorted({1, 2, 3, 4}) == true);
    return 0;
}