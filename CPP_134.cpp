#include <string>
#include <cctype>
using namespace std;

bool check_if_last_char_is_a_letter(const string& str) {
    if(str.empty()) return false;
    return isalpha(toupper(str.back()));
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true);
    return 0;
}