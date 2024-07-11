#include <string>
using namespace std;

class Str {
public:
    Str() {}
    Str(string s) : str(s) {}

    string toString() const { return str; }

private:
    string str;
};

Str encrypt(Str s){
    Str result = Str("");
    for(int i=0; i<s.toString().length(); i++){
        char c = s.toString()[i];
        if(c >= 'a' && c <= 'm'){
            c += 4;
        }
        else if(c >= 'n' && c <= 'z'){
            c -= 26 - 4;
        }
        result.toString() += c;
    }
    return result;
}