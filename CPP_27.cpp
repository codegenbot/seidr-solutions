```cpp
#include <cctype>
#include <string>
#include <iostream>

#include <string>

using namespace std;

std::string flip_case(std::string str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += toupper(c);
        }
        else if(c >= 'A' && c <= 'Z'){
            result += tolower(c);
        }
        else{
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    if (!(cin >> str).good()) {
        cerr << "Invalid input." << endl;
        return 1;
    }
    cout << "Flipped case: " << flip_case(str) << endl;
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
}