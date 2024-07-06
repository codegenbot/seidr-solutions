#include <string>
#include <cstring>

using namespace std;

bool prime_length(const char* str) {
    const char* c_str = str;
    int len = strlen(c_str);
    if(len <= 1) return false;
    for(int i=2; i*i<=len; i++) {
        if(len%i==0)
            return false;
    }
    return true;
}