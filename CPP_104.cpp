#include <vector>

bool issame(int a, int b){
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            if(temp % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main(){
    vector<int> nums = {123, 456, 789, 246, 135};
    vector<int> uniqueNums = unique_digits(nums);
    for(int num : uniqueNums){
        cout << num << " ";
    }
    return 0;
}