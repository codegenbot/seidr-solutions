// Add includes
#include <string>
#include <cassert>

using namespace std; // Add this line

string string_xor(const string& a, const string& b) { // Add function signature

    string result = "";
    for (size_t i = 0; i < a.size(); i++) { // Change int to size_t, Add function logic
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result; // Move return statement inside the function

}

int main() { // Add main function
    assert(string_xor("0101", "0000") == "0101"); // Add test cases using assert
    return 0;
}