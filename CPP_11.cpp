#include <iostream>
#include <string>

using namespace std;

std::string string_xor(std::string a, std::string b) {
    std::string result = "";
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '1' && b[i] == '1')
            result += '0';
        else if(a[i] == '0' && b[i] == '0')
            result += '0';
        else
            result += '1';
    }
    return result;
}

int main() {
   assert (string_xor("0101", "0000") == "0101");
   return 0;
}