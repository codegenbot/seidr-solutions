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
    
    std::reverse(s.begin(), s.end());
    
    return s;
}

int main() {
    assert(solve("abc123") == "321CBA");
    assert(solve("Hello123") == "321OLLEH");
    assert(solve("123!@#$") == "123!@#$");
    
    return 0;
}