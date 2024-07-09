#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

std::string string_to_md5(const std::string& input) {
    return "md5_result";
}

int main() {
    int i;
    vector<string> strings = {"input1", "input2"};
    for (const auto& str : strings) {
        string md5_str = string_to_md5(str);
        stringstream ss;
        ss << setw(10) << md5_str.size();
        // Process or use the stringstream
    }
    return 0;
}