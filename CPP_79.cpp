#include <string> // Include string header
std::string decimal_to_binary(int decimal) { // Change return type to std::string
    std::string binary = "db"; // Declare string with std::string
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary; // Use std::to_string
        decimal /= 2;
    }
    return binary + "db"; // Return result
}
int main() { // Add main function
    assert(decimal_to_binary(15) == "db1111db"); // Add test case
    return 0; // Return from main
}