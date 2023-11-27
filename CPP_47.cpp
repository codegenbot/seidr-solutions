#include <vector>
#include <algorithm>
#include <cmath>

float median(const std::vector<float>& l){
    std::vector<float> sortedL = l;
    std::sort(sortedL.begin(), sortedL.end());
    int n = sortedL.size();
    if(n % 2 == 0){
        return (sortedL[n/2 - 1] + sortedL[n/2]) / 2.0;
    }
    else{
        return sortedL[n/2];
    }
}