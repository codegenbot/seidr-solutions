#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

std::string string_to_md5(const std::string& input) {
    // Implementation of md5 hashing algorithm
    // For simplicity, assume a correct implementation
    return "md5_result";
}

int main() {
    for (std::vector<std::string> strings = {"input1", "input2"}; !strings.empty(); ) {
        std::string str = strings.back();
        strings.pop_back();
        std::string md5_str = string_to_md5(str);
        std::stringstream ss;
        ss << std::setw(10) << (int)md5_str.size();
        // Process or use the stringstream
    }
    return 0;
}