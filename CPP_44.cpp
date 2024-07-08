#include<string>
using namespace std;

string change_base(int x,int base){
    string res = "";
    while(x > 0) {
        int remainder = x % base;
        if(remainder >= 10) {
            res.insert(0,1,"a"+to_string(remainder-10));
        } else {
            res.insert(0,1,to_string(remainder));
        }
        x /= base;
    }
    return (res.empty()) ? "0" : res;
}