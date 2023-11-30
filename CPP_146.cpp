#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(abs(num));
        if(num > 10 && (numStr[0] - '0') % 2 != 0 && (numStr[numStr.length() - 1] - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    // Test cases
    vector<int> nums = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int result = specialFilter(nums);
    cout << result << endl;

    return 0;
}