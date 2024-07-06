#include <string>

bool is_palindrome(std::string text){
    int i = 0, j = text.length() - 1;
    while(i < j){
        if(text[i] != text[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    std::string input;
    cout << "Enter a string: ";
    cin >> input;
    if(is_palindrome(input)) 
        cout << input << " is a palindrome.\n";
    else
        cout << input << " is not a palindrome.\n";
    return 0;
}