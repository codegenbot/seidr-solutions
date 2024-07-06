#include <string>
using namespace std;

bool prime_length(string str) {
    const char* c_str = str.c_str();
    int len = strlen(c_str);
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++) {
        if(len%i==0)
            return false;
    }
    return true;