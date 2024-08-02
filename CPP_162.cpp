#include <cassert>
#include <string>

std::string string_to_md5(const std::string& str);

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}