#include <iostream>
#include <string>

using namespace std;

bool prime_length(string str){
    int len = str.length();
    for(int i=2; i*i <= len; i++){
        if(len%i==0)
            return false;
    }
    string temp = "";
    return true;
}

int main(){
    assert (prime_length("0") == false);
}