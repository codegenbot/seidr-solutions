#include <iostream>
#include <string>

using namespace std;

bool is_nested(string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count > 1){
            return true;
        }
    }
    return false;
}

int main() {
    // Test the is_nested function
    cout << boolalpha << is_nested("[[[]]]") << endl;
    cout << boolalpha << is_nested("[[]]]]") << endl;
    cout << boolalpha << is_nested("[]") << endl;
    
    return 0;
}