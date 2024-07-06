#include <string>
#include <assert.h>

int main() {
    std::string s = "EEEE";
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            count++;
        }
    }
    assert(count == 4); 
    return 0;
}