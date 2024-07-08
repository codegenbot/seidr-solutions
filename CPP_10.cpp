#include <algorithm>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    if(is_palindrome(str)) return str; // If the input string is already a palindrome, return it as is

    int i = 0, j = str.length() - 1; // Initialize two pointers, one at the start and one at the end of the string
    while(i < j){ // While the characters at the start and end are not equal
        if(str[i] != str[j]){ // If they're not equal
            int k = j; // Move the end pointer to the left until it finds a matching character
            for(;k > i && str[k] != str[i]; k--);
            string suffix = str.substr(i, k-i+1); // Extract the palindrome suffix
            return str + is_palindrome(suffix) ? "" : make_palindrome(suffix).substr(0, 1) + str + make_palindrome(suffix).substr(1); // Append the reverse of the prefix and the palindrome suffix
        }
        i++; j--; // Move both pointers towards the center if they're equal
    }
    return str; // If the string is already a palindrome, return it as is
}