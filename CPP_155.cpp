#include <vector>
#include <cassert>
#include <cstdlib>

using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    num = abs(num);
    
    while(num > 0){
        digit = num % 10;
        if(digit % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
        num = num / 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}

int main(){
    assert (even_odd_count(0) == vector<int>{1, 0});
    
    return 0;
}