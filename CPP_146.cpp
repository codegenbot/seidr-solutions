#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    
    for(int num : nums){
        string str = to_string(abs(num));
        
        if(str[0] % 2 != 0 && str[str.size()-1] % 2 != 0 && num > 10){
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<int> nums = {1, 22, 333, 4444, 55555};
    int result = specialFilter(nums);
    cout << "Result: " << result << endl;
    
    return 0;
}