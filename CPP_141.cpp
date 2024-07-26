#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string file_name_check(const string& file_name) {
    int digits_count = 0;
    int dot_count = 0;
    int dot_position = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_position = i;
        }
    }
    
    if (digits_count > 3 || dot_count != 1 || dot_position == 0 || dot_position == file_name.length() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dot_position + 1);
    
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}

int main() {
    assert(file_name_check("s.") == "No");
    
    return 0;
}