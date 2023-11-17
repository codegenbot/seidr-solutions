#include <iostream>
#include <string>
#include <cassert>
using namespace std;
/*
For a given string, flip lowercase characters to uppercase and uppercase to lowercase.
>>> flip_case("Hello")
"hELLO"
*/
string flip_case(string str){
    int i;
    for(i=0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        else
            str[i]=str[i]+32;
    }
    return str;
}
int main(){
    // string str;
    // while(getline(cin,str)){
    //     cout<<flip_case(str)<<endl;
    // }
    assert (filp_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    assert (filp_case("Hello World!") == "hELLO wORLD!");
    assert (filp_case("") == "");
    assert (filp_case("a") == "A");
    assert (filp_case("A") == "a");
    assert (filp_case("1") == "1");
    assert (filp_case("%^&*(") == "%^&*(");
    assert (filp_case("abcdefghijklmnopqrstuvwxyz") == "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    assert (filp_case("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == "abcdefghijklmnopqrstuvwxyz");
    assert (filp_case("Hello World! 12345") == "hELLO wORLD! 12345");
    assert (filp_case("Hello World! 12345") == "hELLO wORLD! 12345");
    assert (filp_case("Hello World! 12345") == "hELLO wORLD! 12345");
    assert (filp_case("Hello World! 12345") == "hELLO wORLD! 12345");
    return 0;
}
