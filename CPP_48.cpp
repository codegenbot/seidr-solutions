#include <iostream>
#include <string>

bool is_palindrome(std::string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main(){
    assert(is_palindrome("xywzx") == false);
    std::cout << "Success" << std::endl;
    return 0;
}