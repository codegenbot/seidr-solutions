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
    vector<string> strings;
    cout << "Enter the number of inputs: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        string str;
        cout << "Input" << (i+1) << ": ";
        getline(cin, str);
        string md5_str = string_to_md5(str);
        stringstream ss;
        ss << setw(10) << md5_str.size();
        cout << ss.str() << endl;
    }
    return 0;
}