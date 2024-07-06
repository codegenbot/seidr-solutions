#include <string>

bool is_palindrome(const std::string& text) {
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1])
            return false;
    }
    return true;

}

int main() {
    assert (is_palindrome("xywzx") == false);
    // Add more test cases here
    return 0;
}