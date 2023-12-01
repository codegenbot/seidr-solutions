#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string file_name_check(string file_name);

int main() {
    assert(file_name_check("s.") == "No");
    assert(file_name_check(".txt") == "No");
    assert(file_name_check("abc.exe") == "Yes");
    assert(file_name_check("a321.") == "No");
    // more test cases...
    return 0;
}

string file_name_check(string file_name){
    int dotIndex = file_name.find('.');
    if(dotIndex == string::npos || dotIndex == 0 || dotIndex == file_name.length()-1){
        return "No";
    }
    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex+1);
    if(beforeDot.length() == 0 || !isalpha(beforeDot[0])){
        return "No";
    }
    int digitCount = 0;
    for(char c : beforeDot){
        if(isdigit(c)){
            digitCount++;
        }
    }
    if(digitCount > 3){
        return "No";
    }
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
        return "No";
    }
    return "Yes";
}