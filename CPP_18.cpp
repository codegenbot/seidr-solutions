#include <string>
#include <cassert>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    for (int i = 0; i <= strLen - subLen; i++) {
        if (str.substr(i, subLen) == substring) {
            count++;
        }
    }
    
    return count;
}

int main() {
    assert(how_many_times("john doe", "john") == 1);
    
    return 0;
}