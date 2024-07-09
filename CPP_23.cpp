```cpp
#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    if(str.empty()) {
        std::cerr << "Error: Input string is empty." << std::endl;
        return -1; // Return a negative value to indicate error.
    }
    return str.length();
}

int main() {
    assert(my_strlen("asdasnakj") == 12); 
    return 0;
}