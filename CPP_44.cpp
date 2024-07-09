#include<string>
using namespace std;

string change_base(int x,int base){
    string res = "";
    while(x > 0) {
        int temp = x % base;
        if(temp < 10)
            res = to_string(temp) + res;
        else
            res = 'A' + (temp - 10) + res;
        x /= base;
    }
    return res;
}