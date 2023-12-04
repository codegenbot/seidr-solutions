```
#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
#include <string_view>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    float truncatedNumber = truncate_number(123.456);
    std::string str = std::to_string(truncatedNumber);
    string_view<char> view(str.c_str());
    int result = view.find('e');
    assert(result != string_view<char>::npos);
    return result;
}
```