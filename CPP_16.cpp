#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

int main() {
    std::string str = "Jerry jERRY JeRRRY";
    
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::vector<char> distinctChars;
    
    for (char c : str) {
        if (std::find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            distinctChars.push_back(c);
        }
    }
    
    assert(distinctChars.size() == 5);
    
    return 0;
}