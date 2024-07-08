#include<string>
using namespace std;

string change_base(int x,int base){
    string res = "";
    while(x > 0) {
        int remainder = x % base;
        if(remainder >= 10) {
            res.insert(0,1,(remainder < 10) ? (char)(remainder + '0') : ('a' + remainder - 10));
        } else {
            res.insert(0,1,(char)(remainder + '0'));
        }
        x /= base;
    }
    return (res.empty()) ? "0" : res;
}