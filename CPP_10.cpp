#include <string>
using namespace std;
string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for (int i = str.size()-1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, str.size() - i);
        }
    }
    return str;
}