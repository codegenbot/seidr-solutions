#include <iostream>
#include <cctype>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i=1; i<s.size(); i=i+2){
        if(std::isupper(s[i]))
            count++;
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    // Add more test cases or your program logic here
    return 0;
}