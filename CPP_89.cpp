Here is the solution:

```cpp
#include<string>
using namespace std;

string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char base = 'a';
            if(islower(c))
                base = 'a';
            else
                base = 'A';
            result += (char)((c - base + 2 * 26) % 26 + base);
        }
        else
            result += c;
    }
    return result;
}