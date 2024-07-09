```cpp
#include <string>
int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isupper(c)){
            sum += (int)c - 55; // subtract 55 because ASCII value of 'A' is 65, and subtracting 26 from that will give us the corresponding integer value
        }
    }
    return sum;
}