```cpp
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool is_palindrome(string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end])
            return false;
        start++;
        end--;
    }

    return true;
}

int main(){
    assert(is_palindrome("xywzx") == false);
    cout << "Test passed.\n";
    return 0;
}