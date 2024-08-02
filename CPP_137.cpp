#include <any>
#include <string>
#include <cassert>   // Include the <cassert> header

std::any compare_one(std::any a, std::any b) {
    // Your existing code remains the same
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::any(std::string("1")), std::any(std::string("2")))) == "2");  // Correct the assert statement
    return 0;  // Add return statement at the end of main
}