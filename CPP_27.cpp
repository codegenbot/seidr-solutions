#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string flip_case(string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Flipped case string: " << flip_case(input) << endl;
    
    assert(flip_case(input) == "FLIPPEDCASESTRING"); // corrected the typographical error here

    return 0;
}