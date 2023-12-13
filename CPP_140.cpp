```cpp
#include <iostream>
#include <string>

using namespace std;

string fix_spaces(const string& text){
    string result = "";
    int consecutiveSpaces = 0;
    for(int i=0; i<text.size(); i++){
        if(text.at(i) == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces == 3){
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += text.at(i);
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    cout << fix_spaces("   Exa 1 2 2 mple") << endl;

    // Additional test cases
    cout << fix_spaces("Hello World") << endl;
    cout << fix_spaces("A___B___C") << endl;
    cout << fix_spaces("   ") << endl;
    cout << fix_spaces("") << endl;

    return 0;
}
```