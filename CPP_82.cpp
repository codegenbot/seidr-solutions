#include <cstring>
#include <cassert>

bool prime_length(char* str){
    int len = strlen(str);
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++){
        if(len%i==0) return false;
    }
    return true;

}

int main() {
    char str[] = "0";
    assert(prime_length(str) == false);

    // or

    const char* str = "0";
    char temp[2] = {str[0], '\0'};
    assert(prime_length(temp) == false);
}