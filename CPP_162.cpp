#include <string>
#include <functional>
#include <algorithm>

std::string string_to_md5(const std::string& input) {
    // implementation of MD5 hash calculation goes here
    return "your-md5-hash";
}

int main() {
    if (!string_to_md5("").empty()) {  // Error here: undefined function
        std::cout << "Error: You must define the function before using it." << std::endl;
    }
    return 0;
}