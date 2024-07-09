#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<int> lst){
    int result = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0){
            result += lst[i] * lst[i];
        } else if(i % 4 == 0 && i % 3 != 0){
            result += std::pow(lst[i], 3);
        }
    }
    return result;
}