#include <iostream>
#include <string>
using namespace std;

std::string filp_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::islower(c))
            result += toupper(c);
        else if(std::isupper(c))
            result += tolower(c);
        else
            result += c;
    }
    return result;
}

int main(){
    string s;
    cin >> s;
    cout << filp_case(s) << endl;
    return 0;
}