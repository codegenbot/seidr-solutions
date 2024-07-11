#include <string>
#include <cassert>
#include <cstring>

int my_strlen(std::string str){
    int len = 0;
    for (char c : str) {
        if (c != '\0') {
            len++;
        }
    }
    return len;
}

int main() {
    assert (my_strlen("asdasnakj") == 12); 
    return 0;
}