#include<stdio.h>
#include<string>
using namespace std;

string decode_cyclic(string s) {
    int l = s.length();
    int num = (l+2)/3;
    string x, output;
    int i;
    for (i=0; i<num; i++) {
        //cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i*3,3);
        if (x.length() == 1) x = x + s.substr(0,2);
        else if (x.length() > 3) x = x.substr(1) + x[0];
        output = output + x;
    }
    return output;
}