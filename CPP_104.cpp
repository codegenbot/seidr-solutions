#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    
    for(int num : x){
        bool hasEvenDigit = false;
        
        int tempNum = num; // Save the original number
        
        while(tempNum > 0){
            int digit = tempNum % 10;
            
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            
            tempNum /= 10;
        }
        
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}

int main() {
    assert(unique_digits({135, 103, 31}) == vector<int>({31, 135}));
    
    return 0;
}