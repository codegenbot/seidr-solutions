#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    if(lst.empty()) return 0;
    
    int sum = 0;
    for (int num : lst) {
        sum += num * num;
    }
    return sum;
}