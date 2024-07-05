#include <cctype>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    size_t dot_position = string::npos;
    
    for (size_t i = 0; i < file_name.length(); ++i) {
        if (isdigit(file_name[i])) {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_position = i;
        }
    }
    
    if (digit_count > 3 || dot_count != 1 || dot_position == 0 || dot_position == string::npos || !isalpha(file_name[0])) {
        return "No";
    }
    
    string extension = file_name.substr(dot_position + 1);
    if (extension == "txt" || extension == "exe" || extension == "dll") {
        return "Yes";
    }
    
    return "No";
}