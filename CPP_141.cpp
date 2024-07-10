Here is the completed code:

```cpp
#include <string>

using namespace std;

string file_name_check(string file_name) {
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.') {
            dot_count++;
            if (dot_count > 1) {
                valid = false;
                break;
            }
        } else if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) {
                valid = false;
                break;
            }
        } else if (!isalpha(file_name[i]) && file_name[i] != '.') {
            valid = false;
            break;
        }
    }
    
    string extension = "";
    for (int i = file_name.length() - 1; i > 0; i--) {
        if (file_name[i] == '.') {
            break;
        } else {
            extension += file_name[i];
        }
    }
    
    if (!valid || extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    } else {
        return "Yes";
    }
}