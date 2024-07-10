#include <string>
std::string string_sequence(int n);

#include <cassert>

int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    return 0;
}