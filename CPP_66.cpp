#include <string>

int digitSum(std::string s) {
    int sum = 0;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i]))
            sum += (int)s[i] - 55;
    }
    return sum;
}