#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(int i=0; i<lst.size(); i++){
        int rounded = std::ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}