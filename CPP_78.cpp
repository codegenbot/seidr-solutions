```cpp
#include <string>
using namespace std;

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!std::isdigit(c) && !isxdigit(c)) { 
            return -1; 
        }
    }
    return count + 1; 
}