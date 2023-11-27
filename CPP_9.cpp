#include <vector>

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxNum = numbers[0];
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] > maxNum){
            maxNum = numbers[i];
        }
        rollingMax.push_back(maxNum);
    }
    return rollingMax;
}