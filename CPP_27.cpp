#include <string>
using namespace std;

std::string myFlipCase(std::string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += (c - ('a' - 'A'));
        else if(c >= 'A' && c <= 'Z')
            result += (c - ('A' - 'a'));
        else
            result += c;
    }
    return result;
}