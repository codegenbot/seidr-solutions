#include <iostream>
#include <vector>
#include <algorithm>

float median(const std::vector<float>& l){
    std::vector<float> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    int size = sortedList.size();
    if (size % 2 == 0){
        return (sortedList[size/2 - 1] + sortedList[size/2]) / 2.0;
    }
    else{
        return sortedList[size/2];
    }
}

int main(){
    assert(median({8, 1, 3, 9, 9, 2, 7}) == 7);
    return 0;
}