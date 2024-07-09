#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i*i <= len; i++){
        if(len%i==0)
            return false;
    }
    for(int i=0; i<len; i++){
        if(str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
            return false;
    }
    return true;

}
int main(){
    assert (prime_length("0") == false);
}