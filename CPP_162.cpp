#include <sstream>

std::stringstream ss;
ss << std::hex << std::setfill('0') << std::setw(2) << (int)md5[i];