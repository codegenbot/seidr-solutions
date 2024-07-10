#include <string>
#include <algorithm>
#include <cassert>

std::string make_palindrome(std::string str);

// Define is_palindrome function here if needed

std::string make_palindrome(std::string str){
    if(str.empty()) return str;
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            std::string prefix = str.substr(0,i);
            std::string suffix = str.substr(i);
            std::reverse(prefix.begin(), prefix.end());
            return str + suffix;
        }
    }
    return str;
}

int main(){
    assert (make_palindrome("jerry") == "jerryrrej");
    
    return 0;
}