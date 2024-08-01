```cpp
#include <cstddef>
#include <string>

size_t pos = txt.find_last_of(" ");
if (pos == string::npos) return false;
return isalpha(txt[pos]);