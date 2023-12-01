#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool is_palindrome(string text){
    int length = text.length();
    for(int i=0; i<length/2; i++){
        if(text[i] != text[length-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (is_palindrome("racecar") == true);
    assert (is_palindrome("hello") == false);
    assert (is_palindrome("xywzx") == false);

    cout << "All tests passed successfully" << endl;

    return 0;
}