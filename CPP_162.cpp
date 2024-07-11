#include <sstream>
std::stringstream ss;

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    // existing code...
    for(int i = 0; i < str.length(); i++) {
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)(str[i]);
    }
    
    return 0;
}