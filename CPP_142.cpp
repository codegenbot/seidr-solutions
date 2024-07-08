```cpp
#include <cassert>
#include <vector>
#include <cmath>

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

int originalMainFunction() {
    assert(sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5,
                        14, -14, 6, 13, 11, 16, 16, 4, 10}) == -1448);
    return 0;
}