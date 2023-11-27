#include <vector>

int calculate_sum_squares(std::vector<float> lst){
    int sum = 0;
    for(int i=0; i<lst.size(); i++){
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}