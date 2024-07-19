#include <string>
#include <cassert>
#include <cctype>

std::string flip_case(std::string str);

int main() {
    assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}