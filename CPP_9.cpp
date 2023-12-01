#include <vector>
#include <algorithm>
#include <climits>

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> rollingMax;
    int maxSoFar = INT_MIN;

    for(int i=0; i<numbers.size(); i++){
        maxSoFar = std::max(maxSoFar, numbers[i]);
        rollingMax.push_back(maxSoFar);
    }

    return rollingMax;
}

int main(){
    std::vector<int> input = {3, 2, 3, 100, 3};
    std::vector<int> expectedOutput = {3, 3, 3, 100, 100};
    std::vector<int> result = rolling_max(input);

    // Check if the result matches the expected output
    if(result == expectedOutput){
        return 0; // Test Passed
    }
    else{
        return 1; // Test Failed
    }
}