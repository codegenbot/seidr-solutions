#include <vector>
#include <cassert>
#include <initializer_list>

long long minSubArraySum(std::initializer_list<long long> nums){
    std::vector<long long> numList(nums.begin(), nums.end());

    long long minSum = numList[0];
    long long currentSum = numList[0];

    for(int i=1; i<numList.size(); i++){
        currentSum = std::min(numList[i], currentSum + numList[i]);
        minSum = std::min(minSum, currentSum);
    }

    return minSum;
}

int main(){
    assert (minSubArraySum({1, -1}) == -1);

    return 0;
}