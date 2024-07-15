#include <string>

string file_name_check(string file_name) {
    int num_digits = 0;
    int dot_pos = -1;

    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            num_digits++;
        } else if (file_name[i] == '.') {
            dot_pos = i;
        }
    }

    if (num_digits > 3 || dot_pos == -1 || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!isalpha(before_dot[0])) {
        return "No";
    }

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}

int main() {
    string file_name;
    cin >> file_name;
    
    cout << file_name_check(file_name) << endl;
    
    return 0;
}