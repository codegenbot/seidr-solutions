#include <vector>
#include <string>
#include <cassert>

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
    assert(specialFilter({}) == 0);
    // Add more test cases if necessary
    
    return 0;
}