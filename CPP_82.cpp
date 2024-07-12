#include <string>
#include <cassert>

bool prime_length(const char* str){
    int len = strlen(str);
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    assert(prime_length("0") == false);
}