#include <string>

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i<=len/2; i++){
        if(len%i==0)
            return false;
    }
    return true;
}