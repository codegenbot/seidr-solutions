```c++
ss << std::hex << std::cout.width(2) << std::cout.fill('0') << ((unsigned char)(text[i])) << std::endl;