#include <iostream>
#include <string>
using namespace std;

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            string temp = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                temp += s[j];
                i = j;
            }
            sort(temp.begin(), temp.end());
            result += temp;
        }
    }
    return result;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Anti-shuffled string: " << anti_shuffle(str) << endl;
    return 0;
}