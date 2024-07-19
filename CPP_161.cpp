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
    assert(solve("aBcDeFgH") == "hGfEdCbA");
    assert(solve("12345") == "54321");
    
    return 0;
}