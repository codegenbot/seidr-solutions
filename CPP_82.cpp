```
#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    if(len<1) return false;
    for(int i=2; i*i <= len; i++){
        if(len%i==0)
            return false;
    }
    for(int i=0; i<len; i++){
        if(str[i] >= '2' && str[i] <= '9')
            return false;
    }
    return true;

}

int main(){
    assert (prime_length("0") == false);
}