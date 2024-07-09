#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

std::string string_to_md5(const std::string& input) {
    // Implementation of md5 hashing algorithm
    // For simplicity, assume a correct implementation
    return "md5_result";
}

int main() {
    vector<string> strings = {"input1", "input2"};
    for (const auto& str : strings) {
        string md5_str = string_to_md5(str);
        stringstream ss;
        ss << setw(10) << md5_str.size();
        cout << ss.str() << endl;
    }
    return 0;
}