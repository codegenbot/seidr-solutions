#include <cassert>
#include <string>

int file_name_check(string filename) {
    if (filename.size() < 2 || filename[filename.size()-1] != '.' || filename[0] == '.') {
        return 0;
    }
    int dot_index = filename.find('.');
    if (dot_index != string::npos && dot_index > 0) {
        return 1;
    }
    return -1;
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}