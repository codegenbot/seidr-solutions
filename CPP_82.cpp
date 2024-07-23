#include <string>

int prime_length(std::string str){
    int len = str.length();
    if(len <= 1) return 0;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return 0;
    }
    return 1;
}