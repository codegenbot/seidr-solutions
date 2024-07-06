#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i=1; i<s.length(); i=i+2){
        if(isupper(s[i])){
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "Count of upper characters in EEEE is: " << count_upper("EEEE") << std::endl;
    return 0;
}