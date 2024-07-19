#include <string>
#include <cassert>

int hex_key(std::string str) {
    int count = 0;
    for(char c : str) {
        if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) {
            count++;
        }
    }
    return count;
}

int main(){
    assert(hex_key("") == 0);
    assert(hex_key("123456789ABCDEF") == 8);
    assert(hex_key("ABCXYZ") == 3);

    return 0;
}