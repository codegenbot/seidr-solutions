#include <iostream>
#include <string>

int how_many_times(std::string str, std::string substring) {
    int count = 0;
    int sub_len = substring.length();
    int str_len = str.length();

    if (sub_len == 0) {
        return 0;
    }

    for (int i = 0; i <= str_len - sub_len; i++) {
        if (str.substr(i, sub_len) == substring) {
            count++;
        }
    }

    return count;
}