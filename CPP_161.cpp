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

// In the main function or test cases
// Test inputs
std::string input1 = "Hello123";
std::string input2 = "AbCdEfG";
// Comparing outputs using assertions
assert(solve(input1) == "321OLLEH");
assert(solve(input2) == "gFeDcBa");