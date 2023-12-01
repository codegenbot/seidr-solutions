#include <iostream>
#include <string>

using namespace std;

string fix_spaces(string text){
    int n = text.size();
    string result = "";
    int consecutive_spaces = 0;
    for(int i=0; i<n; i++){
        if(text[i] == ' '){
            consecutive_spaces++;
            if(consecutive_spaces > 2){
                result += "-";
            }
            else{
                result += "_";
            }
        }
        else{
            result += text[i];
            consecutive_spaces = 0;
        }
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);
    string output = fix_spaces(input);
    cout << output << endl;
    return 0;
}