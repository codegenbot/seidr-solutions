```cpp
#include <string>
#include <algorithm>

int compare_strings(const std::string& a, const std::string& b) {
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}

std::string compare_one(const std::string& str, int num) {
    if(num == 1) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = (str[i] - 'a' + 'A');
            }
        }
    } else if(num == -1) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = (str[i] - 'A' + 'a');
            }
        }
    }
    return str;
}