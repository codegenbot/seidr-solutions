```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool issame(char ch1, char ch2) {
    if (isalpha(ch1) && isalpha(ch2)) {
        return tolower(ch1) == tolower(ch2);
    } else {
        return false;
    }
}

int main() {
    return 0;
}