#include <cassert>
#include <vector>

int longest(int count, std::string first, ...) {
    va_list(ap);
    va_start(ap, first);

    int result = first.size();
    for (int i = 0; i < count - 1; ++i) {
        if (va_arg(ap, std::string).size() > result) {
            result = va_arg(ap, std::string).size();
        }
    }

    va_end(ap);
    return result;
}

int main() {
    int result = longest(6, "x", "yyy", "zzzz", "www", "kkkk", "abc");
    assert(result == 5); 
    return 0;
}