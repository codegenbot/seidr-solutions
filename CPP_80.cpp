```cpp
#include <iostream>
#include <string>

bool is_happy(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += (s[i] - '0') * (s[i] - '0');
    }
    
    if(sum == 1)
        return true;
    else{
        std::string str = std::to_string(sum);
        while(true){
            sum = 0;
            for(int i=0; i<str.length(); i++){
                sum += (str[i]-'0') * (str[i]-'0');
            }
            if(sum == 1)
                return true;
            else if(sum != 1 && sum != 4) // 4 is not a happy number
                return false;
            str = std::to_string(sum);
        }
    }
}

int main() {
    std::string num;
    std::cout << "Enter a number: ";
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}