#include <iostream>
#include <cctype>
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

int main(){
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << flip_case(s) << endl;
    return 0;
}