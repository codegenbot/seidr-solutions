#include <string>

bool is_palindrome(string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(text[start] != text[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main(){
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if(is_palindrome(input)){
        cout << "The entered string is a palindrome." << endl;
    } else {
        cout << "The entered string is not a palindrome." << endl;
    }
    
    return 0;
}