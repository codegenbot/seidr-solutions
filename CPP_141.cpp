#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string file_name_check(string file_name){
    int dotIndex = file_name.find(".");
    if(dotIndex == string::npos){
        return "No";
    }
    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex + 1);
    if(beforeDot.empty() || !isalpha(beforeDot[0])){
        return "No";
    }
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
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
    return "Yes";
}

int main(){
    assert(file_name_check("s.") == "No");
    assert(file_name_check("file.txt") == "Yes");
    assert(file_name_check("test.exe") == "Yes");
    assert(file_name_check("lib.dll") == "Yes");
    assert(file_name_check("123.test.txt") == "No");
    assert(file_name_check("file..txt") == "No");
    assert(file_name_check("file") == "No");
    assert(file_name_check("file.") == "No");
    assert(file_name_check(".txt") == "No");
    assert(file_name_check(".exe") == "No");
    assert(file_name_check(".dll") == "No");
    assert(file_name_check("") == "No");
    assert(file_name_check("12345") == "No");
    assert(file_name_check("file.xyz") == "No");

    cout << "All test cases passed";
    return 0;
}