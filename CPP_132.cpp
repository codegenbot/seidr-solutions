#include <iostream>
#include <string>

using namespace std;

bool is_nested(const char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '[' || str[i] == ']') {
            count++;
        }
    }
    return count % 2 == 1;
}

int main() {
    const char* str = "[[]]]]]]][[[[[]";
    cout << is_nested(str) << endl;
    return 0;
}