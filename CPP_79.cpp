#include <string>  // Include the string header

std::string decimal_to_binary(int decimal){  // Use std::string instead of just string
    std::string binary = "db";  // Use std::string instead of just string
    while(decimal > 0){
        binary = std::to_string(decimal % 2) + binary;  // Use std::to_string instead of to_string
        decimal /= 2;
    }
    return binary + "db";
}

int main(){
    // Add the missing function declaration
    std::string decimal_to_binary(int decimal);
    
    // Ensure the function is working correctly using assert
    assert (decimal_to_binary(15) == "db1111db");
    
    return 0;
}