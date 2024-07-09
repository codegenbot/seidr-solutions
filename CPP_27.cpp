#include <string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z') // Check if character is lowercase
            result += toupper(str[i]);  // Convert to uppercase
        else if(str[i]>='A' && str[i]<='Z') // Check if character is uppercase
            result += tolower(str[i]);   // Convert to lowercase
        else 
            result += str[i];  // If not letter, just add it as is
    }
    return result;
}