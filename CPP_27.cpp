#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            result += toupper(c);
        else if(c >= 'A' && c <= 'Z')
            result += tolower(c);
        else
            result += c;
    }
    return result;
}

int main(){
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << "Flipped case: " << flip_case(s) << endl;
    return 0;
}