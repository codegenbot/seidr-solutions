```cpp
#include <iostream>
#include <string>

using namespace std;

std::string fix_spaces(string text){
    string result = "";
    for(int i=0; i < text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ')){
            result += '_';
        } else if(text[i] == ' ' && i < text.length()-1 && text[i+1] == ' '){
            int j = i;
            while(j < text.length() - 1 && text[j+1] == ' ') j++;
            result += '-';
            i = j;
        } else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    cout << fix_spaces("   Exa 1 2 2 mple") << endl;
    return 0;
}