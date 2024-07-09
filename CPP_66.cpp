```cpp
int digitSum(string s){
    int sum = 0;
    for(char c : s){
        if(isdigit(c) || (isalpha(c) && islower(c))){
            sum += (c - '0');
        }
    }
    return sum;
}