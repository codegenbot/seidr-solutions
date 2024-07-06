```cpp
#include <string>
using namespace std;

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!std::isdigit(c) && !isxdigit(c)) { 
            return -1; // Return -1 because the string contains invalid characters
        }
    }
    return count + 1; // Add one to the count because we want to know whether the key is valid or not
}