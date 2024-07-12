#include <vector>
#include <cassert>

int solutions(std::vector<int> lst){ 
    int sum = 0; 
    for (int i = 0; i < lst.size(); ++i) { 
        if (lst[i] % 2 == 1) { 
            sum += lst[i]; 
        } 
    } 
    return sum; 
}