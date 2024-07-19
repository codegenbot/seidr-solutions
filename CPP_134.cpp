```cpp
#include <cstddef>
#include <cctype>

size_t pos = txt.find_last_of(" ");
return pos == string::npos || !isalpha(txt.back());