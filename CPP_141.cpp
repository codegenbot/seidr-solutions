#include <string>
using namespace std;

string file_name_check(string file_name) {
    int digitCount = 0;
    bool valid = true;
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            if (digitCount > 3 || file_name.find('.') != file_name.rfind('.') || file_name.find('.') == 0 || file_name.find('.') == file_name.size() - 1) {
                valid = false;
                break;
            }
            string ext = file_name.substr(file_name.find('.') + 1);
            if (ext != "txt" && ext != "exe" && ext != "dll") {
                valid = false;
                break;
            }
        }
    }
    
    if (digitCount > 3 || !valid) {
        return "No";
    }
    
    return "Yes";
}