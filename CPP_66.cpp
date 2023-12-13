```cpp
#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

int digitSum(std::string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(std::isupper(s[i])){
            sum += int(s[i]);
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}
```