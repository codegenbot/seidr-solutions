#include<string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while(x > 0){
        int rem = x % base;
        if(rem < 10) res.push_back('0' + rem);
        else res.push_back('7'); // assume base greater than 9 is represented by '7'
        x /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}