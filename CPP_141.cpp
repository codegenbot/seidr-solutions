#include <string>
#include <cctype>

using namespace std;

int count_digits(const string& str) {
    return count((const char*)str.begin(), (const char*)str.end(), isdigit);
}

int main() {
    // Your code here
}