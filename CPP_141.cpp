#include <cctype>
using namespace std;

string file_name_check(string file_name) {
    int dot_index = -1;
    int digit_count = 0;
    bool start_with_letter = false;

    for (int i = 0; i < file_name.length(); ++i) {
        char c = file_name[i];
        if (c == '.') {
            dot_index = i;
        } else if (isdigit(c)) {
            digit_count++;
        } else if (!start_with_letter && isalpha(c)) {
            start_with_letter = true;
        }
    }

    if (dot_index < 0 || dot_index >= file_name.length() - 1) {
        return "No";
    }
    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index + 1);

    if (!start_with_letter || digit_count > 3) {
        return "No";
    }

    set<string> extensions = {"txt", "exe", "dll"};
    if (find(extensions.begin(), extensions.end(), after_dot) == extensions.end()) {
        return "No";
    }

    return "Yes";
}