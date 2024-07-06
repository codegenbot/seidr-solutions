#include<string>
using namespace std;

string circular_shift(int x,int shift){
    string str = to_string(x);
    int len = str.length();
    if(shift >= len) {
        return str;
    }
    string result = "";
    for(int i=0; i<len; i++) {
        if(i-shift < 0) {
            result += str.substr(len-i,1);
        } else {
            result += str.substr(i-shift,1);
        }
    }
    return result;
}