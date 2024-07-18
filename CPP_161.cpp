#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string solve(string s){
    for(char &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if(count_if(s.begin(), s.end(), isalpha) == 0){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    string result = solve(input);
    
    cout << "Output: " << result << endl;
    
    return 0;
}