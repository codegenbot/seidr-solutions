#include <string>
using namespace std;

std::string string_xor(const std::string& a, const std::string& b) {
    string result = "";
    for(int i=0; i<a.length(); i++){
        if(a[i] != b[i]){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}