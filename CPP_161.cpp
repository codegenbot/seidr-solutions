#include <string>
#include <algorithm>
#include <cctype>

std::string solve(const std::string& s) {
    for(char &c : s) {
        if(isalpha(c)) {
            if(islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    
    reverse(s.begin(), s.end());
    
    return s;
}

int main() {
    assert(solve("Hello, World!") == "!DLROW ,OLLEH");
    assert(solve("abc123") == "321CBA");
    
    return 0;
}