#include <string>
using namespace std;

String encrypt(String s) {
    String result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'm'){
            c += 4;
        }
        else if(c >= 'n' && c <= 'z'){
            c -= 26 - 4;
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    return 0;
}