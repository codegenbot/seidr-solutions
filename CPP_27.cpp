```
#include<cassert>
#include<iostream>

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = (char)str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper((char)c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower((char)c);
        else
            result += (char)c;
    }
    return result;
}

int main(){
    string user_string;
    cout << "Enter a sentence: ";
    cin >> user_string;
    cout << "Flipped case of the sentence: " << flip_case(user_string) << endl;
    return 0;
}