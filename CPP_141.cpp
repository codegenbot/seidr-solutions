#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;
    string prefix;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot) {
            prefix += c;
        }
    }

    return (digit_count <= 3 && found_dot && !prefix.empty() && isalpha(prefix[0]) &&
           (find({"txt", "exe", "dll"}, file_name.substr(file_name.find('.') + 1)) != end({"txt", "exe", "dll"}))
           ? "Yes" : "No";
}