#include <vector>
#include <numeric>

int sum_squares(std::vector<int> lst){
    int total = 0;
    for(int i = 0; i < lst.size(); i++){
        if(i % 3 == 0 && i % 4 != 0)
            total += std::accumulate(lst.begin(), lst.end(), 0) * i;
        else if(i % 4 == 0 && i % 3 != 0)
            total += std::pow(std::accumulate(lst.begin(), lst.end(), 0), i);
    }
    return total;
}