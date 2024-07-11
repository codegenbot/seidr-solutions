```cpp
#include <sstream>
std::stringstream ss;

// existing code...
ss << std::hex << std::setfill('0') << std::setw(2) << (int)md5[i];

string input;
cin >> input;
assert(string_to_md5(input) == md5);