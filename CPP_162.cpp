#include <sstream>
#include <iomanip>
#include <string>

std::string string_to_md5(std::string str) {
    // implement your md5 calculation logic here
    return "your_md5_result";
}

int main() {
    std::stringstream ss;
    int md5[16] = {0}; 
    for(int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md5[i];
    }
}