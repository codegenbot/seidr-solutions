```cpp
#include <iostream>
#include <cctype>
using namespace std;

std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::islower(c))
            result += std::toupper(c);
        else if(std::isupper(c))
            result += std::tolower(c);
        else
            result += c;
    }
    return result;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"Flip case: "<<flip_case(str)<<endl;
    return 0;
}