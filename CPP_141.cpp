#include <string>
#include <cctype>

using namespace std;

int count_digits(const string& str) {
    return count((const char*)str.begin(), (const char*)str.end(), isdigit);
}

string file_name_check(string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!all_of(before_dot.begin(), before_dot.end(), ::isalpha)) {
        return "No";
    }

    if (count_digits(file_name) > 3) {
        return "No";
    }

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}

int main() {
    string file_name;
    cout << "Enter a file name: ";
    cin >> file_name;
    cout << "File name check result: " << file_name_check(file_name) << endl;
    return 0;
}