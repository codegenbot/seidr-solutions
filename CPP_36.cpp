#include <string>
#include <sstream>

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        std::stringstream ss;
        ss << i;
        if ((i % 11 == 0 || i % 13 == 0) && ss.str().find('7') != std::string::npos)
            count++;
    }
    return count;
}