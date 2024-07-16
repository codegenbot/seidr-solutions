```cpp
#include <string>
#include <cstddef> 
#include <cctype>

using namespace std;

string result = "";
bool capitalizeNext = true;
string s; 

getline(cin, s); 

for (char c : s) {
    if (c == '-') {
        if(capitalizeNext) result += std::toupper(c);
        capitalizeNext = true;
        result.push_back(' ');
    } else if (capitalizeNext) {
        result += std::toupper(c);
        capitalizeNext = false;
    } else {
        result += tolower(c);
    }
}

size_t pos = result.find(' ');
while (pos != string::npos) {
    result.erase(pos, 1);
    pos = result.find(' ');
}
return result;