#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(const char* str) {
    if(*str == '\0') return false;
    int c = *--str; 
    return ::isalpha(c);  
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}