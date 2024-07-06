#include <cassert>
#include <string>

bool file_name_check(const std::string& filename);

int main_test() {
    assert(file_name_check("s.") == false);
    return 0;
}