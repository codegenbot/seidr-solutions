#include<cstring>
#include<string>
using namespace std;

string encode_shift(string s) {
    string out;
    for (char c : s) {
        int w (((int)c)+5-97)%26+97;
        out+= (char)w;
    }
    return out;
}

string decode_shift(string s){
    string out;
    for (char c : s) {
        int w (((int)c)-97+5) % 26 + 97;
        out += (char)w;
    }
    return out;
}