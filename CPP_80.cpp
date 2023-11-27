#include <string>

bool is_happy(string s){
    if(s.length() < 3){
        return false;
    }
    for(int i=0; i<s.length()-2; i++){
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]){
            return false;
        }
    }
    return true;
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if(is_happy(input)){
        cout << "The string is happy." << endl;
    } else {
        cout << "The string is not happy." << endl;
    }

    return 0;
}