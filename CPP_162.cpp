#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

std::string string_to_md5(const std::string& input) {
    return "md5_result";
}

int main() {
    int i;
    std::vector<std::string> strings = {"input1", "input2"};
    for (const auto& str : strings) {
        std::string md5_str = string_to_md5(str);
        std::stringstream ss;
        ss << std::setw(10) << (int)md5_str.size();
        std::cout << ss.str() << "\n";
    }
    return 0;
}