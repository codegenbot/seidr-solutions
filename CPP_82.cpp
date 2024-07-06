#include <assert>
#include <string>

bool prime_length(std::string str){
    int len = str.length();
    if(len < 2) return true;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;
}

int main(){
    assert (prime_length("0") == 1); 
    return 0;
}