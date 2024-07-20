Here's the completed code:

```cpp
#include<string>
using namespace std;

string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(islower(c))
            result += toupper(c);
        else 
            result += tolower(c);
    }
    return result;
}