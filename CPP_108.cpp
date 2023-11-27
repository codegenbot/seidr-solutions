#include <vector>

int count_nums(vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int temp = num;
        while(temp != 0){
            sum += abs(temp % 10);
            temp /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main(){

    // Test the count_nums() function
    vector<int> nums = {123, -456, 789};
    int result = count_nums(nums);
    // Print the result
    cout << result << endl;

    return 0;
}