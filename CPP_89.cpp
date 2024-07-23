#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            int val = (int)c;
            if(val<97+3)
                result += (char)(val+3);
            else
                result += (char)(96+2-(c-122));
        }
        else {
            result += c;
        }
    }
    return result;
}