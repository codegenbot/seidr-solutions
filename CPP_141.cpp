#include <cassert>
#include <string>

int file_name_check(std::string filename) {
    if(filename.size() > 4 && filename.substr(filename.size()-4).compare(".txt") == 0)
        return 1;
    else
        return 0;
}

int main_test() {
    assert(!file_name_check("s."));
    return 0;
}