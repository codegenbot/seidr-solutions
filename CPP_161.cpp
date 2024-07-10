#include <algorithm>
int solve(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    return 0; 
}