#include <string>

string flip_case(string str) {
    string result = "";
    for(int i=0; i<str.length(); i++) {
        char c = str[i];
        if(c>=97 && c<=122 || c>=65 && c<=90) { // Check if character is lowercase or uppercase letter
            if(c>=97 && c<=122)
                result += (c-32).convert_to<char>();
            else
                result += (c+32).convert_to<char>();
        } else 
            result += c;  // Keep non-alphabetic characters unchanged
    }
    return result;
}