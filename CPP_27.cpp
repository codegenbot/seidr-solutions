#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}
assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");